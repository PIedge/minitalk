/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:30:52 by tmerrien          #+#    #+#             */
/*   Updated: 2021/07/13 16:51:27 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_memset(void *b, int c, size_t len)
{
	while (len >= sizeof(long))
	{
		*((long *)b) = c;
		len -= sizeof(long);
	}
	while (len >= sizeof(int))
	{
		*((int *)b) = c;
		len -= sizeof(int);
	}
	while (len)
	{
		*((char *)(b++)) = c;
		--len;
	}
}
