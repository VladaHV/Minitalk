/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bs_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:57:19 by vhonchar          #+#    #+#             */
/*   Updated: 2023/03/06 12:17:14 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bs.h"

void	ft_atobit(char ch, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (ch & (0x01 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		usleep(500);
	}
}

static void	handler(int signum)
{
	if (signum == SIGUSR2)
		ft_printf("Message recived\n");
}

int	main(int argc, char **argv)
{
	int		i;
	int		pid;
	char	*str;

	if (argc != 3)
	{
		ft_printf("You need enter PID and a msg\n");
		return (0);
	}
	signal(SIGUSR2, handler);
	pid = ft_atoi(argv[1]);
	str = argv[2];
	i = 0;
	while (str[i])
	{
		ft_atobit(str[i], pid);
		i++;
	}
	ft_atobit('\0', pid);
	return (0);
}
