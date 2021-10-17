/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_serv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:00:25 by tmerrien          #+#    #+#             */
/*   Updated: 2021/08/07 00:30:32 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <unistd.h>

void	exit_serv(int exit_code)
{
	if (exit_code == 0)
		write(1, MSG_E_MALLOC, sizeof(MSG_E_MALLOC) / sizeof(char) - 1);
	else if (exit_code == 1)
		write(1, MSG_E_USAGE, sizeof(MSG_E_USAGE) / sizeof(char) - 1);
	write(1, "\n", 1);
	exit(1);
}
