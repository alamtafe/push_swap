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

static void	back_to_a(t_stack **a, t_stack **b, t_bench *bench)
{
	while (*b)
		pa(a, b, bench, 1);
	return ;
}
void	radix_sort(t_stacks *stacks, t_bench *bench)
{
	int	max_bits;
	int	size;
	int	i;
	int	j;

	stacks->b = NULL;
	size = lst_size(stacks->a);
	max_bits = cal_max_bits(size - 1);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (stacks->a->index >> i & 1)
				ra(&stacks->a, bench, 1);
			else
				pb(&stacks->b, &stacks->a, bench, 1);
			j++;
		}
		back_to_a(&stacks->a, &stacks->b, bench);
		i++;
	}
	return ;
}
