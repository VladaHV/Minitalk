/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:38:52 by vhonchar          #+#    #+#             */
/*   Updated: 2023/02/27 18:43:00 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long number)
{
	int		count;

	count = 0;
	if (number < 0)
	{
		number *= -1;
		count += ft_putchar('-');
	}
	if (number < 10)
		count += ft_putchar(number + '0');
	else
	{
		count += ft_putnbr(number / 10);
		count += ft_putnbr(number % 10);
	}
	return (count);
}
