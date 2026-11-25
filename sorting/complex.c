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

static void	back_to_a(t_stack **a, t_stack **b)
{
	while (*b)
		pa(a, b);
	return ;
}
void	radix_sort(t_stack **a)
{
	t_stack	*b;
	int		max_bits;
	int		size;
	int		i;
	int		j;

	b = NULL;
	size = lst_size(*a);
	max_bits = cal_max_bits(size - 1);
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
		back_to_a(a,&b);
		i++;
	}
	return ;
}
