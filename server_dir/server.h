/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:39:59 by tmerrien          #+#    #+#             */
/*   Updated: 2021/08/10 14:57:56 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

/*
** Includes
*/
# include <stdlib.h>
# ifndef __USE_POSIX
#  define __USE_POSIX
# endif
# ifndef __USE_MISC
#  define __USE_MISC
# endif
/*
** Messages
*/
# define MSG_E_MALLOC "Malloc, failed, wth did you do to the RAM\n"
# define MSG_E_USAGE "Usage: \"./client [serv_pid] [string to send]\"\n"
# define MSG_E_SIG "something really wrong happened\nError\n"
/*
** Utils
*/
char	*ft_itoa(int n, char *str);
size_t	ft_strlen(char	*s);
void	exit_serv(int exit_code);
void	ft_memset(void *b, int c, size_t len);

#endif
