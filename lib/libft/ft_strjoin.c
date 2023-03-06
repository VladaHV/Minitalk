/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:33:52 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/17 22:10:06 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		lens1;
	int		lens2;
	int		i;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str[i] = *(s1++);
		i++;
	}
	while (*s2)
	{
		str[i] = *(s2++);
		i++;
	}
	str[i] = '\0';
	return (str);
}
