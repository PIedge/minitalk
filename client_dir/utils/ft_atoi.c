/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:48:18 by tmerrien          #+#    #+#             */
/*   Updated: 2021/07/07 14:48:18 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

static size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	--s;
	while (*(++s))
		++i;
	return (i);
}

int	ft_atoi(char *str)
{
	int	ret;
	int	i;
	int	len;

	ret = 0;
	len = ft_strlen(str);
	i = -1;
	if (str[0] == '-')
		++i;
	while (i < len - 1 && str[i] != '-')
	{
		ret *= 10;
		ret += (str[++i] - '0');
	}
	if (str[0] == '-' && ret != INT_MIN)
		ret *= -1;
	return (ret);
}
