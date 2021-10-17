/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:45:05 by tmerrien          #+#    #+#             */
/*   Updated: 2021/10/17 21:24:43 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <sys/types.h>
#include <signal.h>
#include <sys/ucontext.h>
#include <unistd.h>

#include <stdio.h>

void	print_line(char *buff, int *i)
{
	write(STDOUT_FILENO, buff, ft_strlen(buff));
	ft_memset(buff, 0, 50);
	*i = 0;
}

void	receive_line_sent(int sig, siginfo_t *siginfo, void *context)
{
	static char	buff = 0;
	static int	byte = 0;

	if (sig == SIGUSR1)
		buff <<= 1;
	else if (sig == SIGUSR2)
	{
		buff <<= 1;
		buff |= 1;
	}
	++byte;
	if (byte == 8)
	{
		write(STDOUT_FILENO, &buff, 1);
		buff = 0;
		byte = 0;
	}
	siginfo = 0;
	context = 0;
}

int	main(void)
{
	char				serv_pid[11];
	struct sigaction	act;

	ft_memset(serv_pid, 0, 11);
	ft_memset((void *)&act, 0, sizeof(act));
	act.sa_sigaction = receive_line_sent;
	act.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &act, 0);
	sigaction(SIGUSR2, &act, 0);
	ft_itoa((int)getpid(), serv_pid);
	write(STDERR_FILENO, serv_pid, (int)ft_strlen(serv_pid));
	write(STDERR_FILENO, "\n", 1);
	while (1)
		pause();
}
