/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:08:29 by vhonchar          #+#    #+#             */
/*   Updated: 2023/03/06 12:11:59 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int signum)
{
	static int	bitpos;
	static char	ch;

	if (signum == SIGUSR1)
		ch |= (0x01 << bitpos);
	bitpos++;
	if (bitpos == 8)
	{
		ft_printf("%c", ch);
		bitpos = 0;
		ch = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc > 1)
	{
		ft_printf("Server doesnt need arguments!");
		return (0);
	}
	pid = getpid();
	ft_printf("Server is running. PID: %d\n", pid);
	while (argc == 1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
		pause();
	}
	return (0);
}
