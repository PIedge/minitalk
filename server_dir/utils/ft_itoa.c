/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:54:30 by tmerrien          #+#    #+#             */
/*   Updated: 2021/08/10 14:57:02 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static void	calc_exp(int *exp, int n)
{
	n /= 10;
	while (n)
	{
		n /= 10;
		*exp *= 10;
	}
}

char	*ft_itoa(int n, char *str)
{
	int	i;
	int	exp;

	i = 0;
	exp = 1;
	calc_exp(&exp, n);
	if (n < 0)
		str[i++] = '-';
	while (exp)
	{
		str[i++] = (n / exp) + '0';
		n %= exp;
		exp /= 10;
	}
	str[i] = 0;
	return (str);
}
