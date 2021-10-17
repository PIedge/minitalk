/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 09:31:38 by tmerrien          #+#    #+#             */
/*   Updated: 2021/10/17 19:03:34 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"
#include <signal.h>
#include <sys/types.h>
#include <sys/ucontext.h>
#include <unistd.h>

#include <stdio.h>

static int	is_ascii(const unsigned char *str)
{
	while (*str && *str & 128)
		++str;
	if (*str == '\0')
		return (0);
	return (!(*str == '\0'));
}

static int	check_zer_one(char c, int i)
{
	char	byte;

	byte = 1 << i;
	return (c & byte);
}

static void	send_char(pid_t pid, char c)
{
	int		i;
	char	byte;

	i = 8;
	while (--i >= 0)
	{
		byte = 1 << i;
		if (c & byte)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(4000);
	}
}

void	send_tring(pid_t pid, char *str)
{
	int		i;
	char	c;

	--str;
	while (*(++str))
		send_char(pid, *str);
	send_char(pid, '\n');
}

int	main(int ac, char **av)
{
	pid_t	serv_pid;

	serv_pid = 0;
	if (ac != 3 || !is_ascii((const unsigned char *)av[STRING]))
		exit_client(0);
	serv_pid = ft_atoi(av[PID]);
	if (serv_pid <= 0)
		exit_client(1);
	send_tring(serv_pid, av[STRING]);
}
