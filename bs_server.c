/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bs_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:07:44 by vhonchar          #+#    #+#             */
/*   Updated: 2023/03/06 11:47:18 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bs.h"

void	handler(int signum, siginfo_t *info, void *context)
{
	static int	bit;
	static int	i;

	(void)context;
	if (signum == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		if (i == 0)
			kill(info->si_pid, SIGUSR2);
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int					pid;
	struct sigaction	cmd;

	(void)argv;
	if (argc > 1)
	{
		ft_printf("Server doesnt need arguments!");
		return (0);
	}
	pid = getpid();
	ft_printf("Server is running. PID: %d\n", pid);
	cmd.sa_sigaction = handler;
	sigemptyset(&cmd.sa_mask);
	cmd.sa_flags = 0;
	while (argc == 1)
	{
		sigaction(SIGUSR1, &cmd, NULL);
		sigaction(SIGUSR2, &cmd, NULL);
		pause();
	}
	return (0);
}
