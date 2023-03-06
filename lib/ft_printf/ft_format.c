/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:46:14 by vhonchar          #+#    #+#             */
/*   Updated: 2023/02/27 19:06:08 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// %c Prints a single character.
// %s Prints a string (as defined by the common C convention).
// %p The void * pointer argument has to be printed in hexadecimal format.
// %d Prints a decimal (base 10) number.
// %i Prints an integer in base 10.
// %u Prints an unsigned decimal (base 10) number.
// %x Prints a number in hexadecimal (base 16) lowercase format.
// %X Prints a number in hexadecimal (base 16) uppercase format.
// %% Prints a percent sign.

#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	ret_len;

	ret_len = 0;
	if (format == 'c')
		ret_len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		ret_len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		ret_len += ft_putptr(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		ret_len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		ret_len += ft_putuint(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		ret_len += ft_puthex(va_arg(args, unsigned int), format);
	else if (format == '%')
		ret_len += ft_putchar('%');
	return (ret_len);
}
