/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 17:54:32 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/26 23:14:54 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putnbr(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		count += write(2, "-2147483648", 11);
		return (count);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	c = n % 10 + '0';
	count += write(2, &c, 1);
	return (count);
}
