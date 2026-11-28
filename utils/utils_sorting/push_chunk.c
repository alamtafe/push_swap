/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 22:56:54 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/21 23:02:45 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chooser(t_stack *a, int min, int max)
{
	int	pos_last;
	int	size;
	int	pos_front;
	int	i;

	pos_front = 0;
	size = lst_size(a);
	while (a && (a->index < min || a->index > max))
	{
		pos_front++;
		a = a->next;
	}
	pos_last = pos_front;
	i = pos_front;
	while (a)
	{
		if (a->index >= min && a->index <= max)
			pos_last = i;
		i++;
		a = a->next;
	}
	return (pos_front < size - pos_last);
}

static void	rotate_to_chunk(t_stacks *stacks, int *min_max, int *run_rr,
		t_bench *bench)
{
	if (chooser(stacks->a, min_max[0], min_max[1]))
	{
		if (*run_rr)
		{
			rr(&stacks->a, &stacks->b, bench, 1);
			*run_rr = 0;
		}
		else
			ra(&stacks->a, bench, 1);
	}
	else
	{
		if (*run_rr)
		{
			rb(&stacks->b, bench, 1);
			*run_rr = 0;
		}
		rra(&stacks->a, bench, 1);
	}
	return ;
}

void	push_chunks(t_stacks *stacks, int chunk_size, int *min_max,
		t_bench *bench)
{
	int	mid;
	int	j;
	int	run_rr;

	j = 0;
	mid = min_max[0] - (min_max[0] - min_max[1]) / 2;
	run_rr = 0;
	while (j < chunk_size && stacks->a)
	{
		if (stacks->a->index >= min_max[0] && stacks->a->index <= min_max[1])
		{
			if (run_rr)
			{
				rb(&stacks->b, bench, 1);
				run_rr = 0;
			}
			pb(&stacks->b, &stacks->a, bench, 1);
			if (stacks->b->index <= mid)
				run_rr = 1;
			j++;
		}
		else
			rotate_to_chunk(stacks, min_max, &run_rr, bench);
	}
	return ;
}
