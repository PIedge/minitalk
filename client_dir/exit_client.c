/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_client.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 12:35:21 by tmerrien          #+#    #+#             */
/*   Updated: 2021/08/07 00:30:37 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"
#include <unistd.h>

void	exit_client(int exit_code)
{
	if (!exit_code)
		ft_putstr(MSG_E_ARG);
	if (exit_code == 1)
		ft_putstr(MSG_E_PID);
	write(1, "\n", 1);
	exit(1);
}
