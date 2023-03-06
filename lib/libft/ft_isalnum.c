/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:21:53 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/04 21:46:26 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 & c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("7%d\n", ft_isalnum(7));
// 	return (0);
// }