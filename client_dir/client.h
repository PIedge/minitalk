/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 12:26:58 by tmerrien          #+#    #+#             */
/*   Updated: 2021/08/10 15:09:20 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H
/*
** Includes
*/
# include <stdlib.h>
/*
** Defines
*/
# define MSG_E_ARG "Usage: \"./client [serv_pid] [ascii string]\""
# define MSG_E_SIG "something really wrong happened\nError\n"
# define MSG_E_PID "The PID you sent is wrong, try another\n"
# define PID 1
# define STRING 2

# ifndef __USE_POSIX
#  define __USE_POSIX
# endif
# ifndef __USE_MISC
#  define __USE_MISC
# endif
/*
** Functions
*/
void	exit_client(int exit_code);
/*
** Utils
*/
char	*ft_itoa(int n);
size_t	ft_strlen(char	*s);
void	ft_memset(void *b, int c, size_t len);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
#endif
