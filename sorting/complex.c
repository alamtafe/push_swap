/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 22:43:03 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/24 00:36:08 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack **a)
{
	t_stack	*b;
	int		max_bits;
	int		i;
	int		j;

	b = NULL;
	max_bits = cal_max_bits(lst_size(*a) - 1);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((*a)->index >> i & 1)
				ra(a);
			else
				pb(&b, a);
			j++;
		}
		while (b)
			pa(a, &b);
		i++;
	}
	return ;
}
