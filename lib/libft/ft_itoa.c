/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:32:45 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/04 01:32:29 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nblen(int n)
{
	int				len;
	unsigned int	nstock;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nstock = (unsigned int)n * -1;
		len = 1;
	}
	else
		nstock = (unsigned int)n;
	while (nstock > 0)
	{
		nstock /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	nb;

	len = nblen(n);
	if (n < 0)
		nb = (unsigned int)(n * -1);
	else
		nb = (unsigned int)n;
	str = malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	str[len] = 0;
	while (len-- && nb)
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
