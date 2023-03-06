/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 23:07:45 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/09 19:48:31 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unsigned_len(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

static char	*ft_uitoa(unsigned int nb)
{
	char	*str;
	int		len;

	len = ft_unsigned_len(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (nb != 0)
	{
		str[len - 1] = nb % 10 + 48;
		nb = nb / 10;
		len--;
	}
	return (str);
}

int	ft_putuint(unsigned int nb)
{
	int		ret_len;
	char	*str;

	ret_len = 0;
	if (nb == 0)
		ret_len += write(1, "0", 1);
	else
	{
		str = ft_uitoa(nb);
		ret_len += ft_putstr(str);
		free(str);
	}
	return (ret_len);
}
