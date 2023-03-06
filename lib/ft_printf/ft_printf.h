/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:36:12 by vhonchar          #+#    #+#             */
/*   Updated: 2023/02/27 19:26:18 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_format(va_list args, const char format);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_printf(const char *str, ...);
int		ft_putnbr(long number);
int		ft_putptr(uintptr_t ptr);
int		ft_putuint(unsigned int nb);
int		ft_puthex(unsigned int num, const char format);

#endif