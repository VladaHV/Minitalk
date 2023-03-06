/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:32:18 by vhonchar          #+#    #+#             */
/*   Updated: 2022/12/22 11:54:15 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*dst;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	dst = ft_calloc(sizeof(char), (len + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(dst + i) = (*f)(i, *(s + i));
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}
