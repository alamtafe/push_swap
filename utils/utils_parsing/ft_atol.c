/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 19:19:20 by malouazz          #+#    #+#             */
/*   Updated: 2026/11/23 19:20:16 by malouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define LONG_MAX 9223372036854775807

long	ft_atol(char *str)
{
	long	res;

	int (i), (sign), (digit);
	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - 48;
		if (res > (LONG_MAX - digit) / 10)
			return (LONG_MAX);
		res = res * 10 + digit;
		i++;
	}
	return (res * sign);
}
