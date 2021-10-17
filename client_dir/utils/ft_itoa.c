/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:54:30 by tmerrien          #+#    #+#             */
/*   Updated: 2021/08/10 15:06:02 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	calc_exp(int *exp, int n)
{
	while (n)
	{
		n /= 10;
		*exp *= 10;
	}
}

char	*ft_itoa(int n, char *str, int base)
{
	int	exp;

	calc_exp(&exp, n);
	if (n < 0)
		*(str++) = '-';
}
