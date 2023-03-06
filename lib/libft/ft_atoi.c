/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:32:18 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/04 01:22:53 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_check(const char *c, int *output, int *range)
{
	int	i;

	i = 0;
	while (c[i] == ' ' || c[i] == '\f' || c[i] == '\n'
		|| c[i] == '\r' || c[i] == '\t' || c[i] == '\v')
			i++;
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			*range = ((*range) * -1);
		i++;
	}
	while (c[i] && c[i] >= '0' && c[i] <= '9')
	{
		*output = (10 * (*output) + (c[i] - '0'));
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int		range;
	int		output;

	range = 1;
	output = 0;
	ft_check(str, &output, &range);
	return (output * range);
}
