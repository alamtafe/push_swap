/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_max_to_top_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:37:06 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/21 23:18:05 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mov_max_to_top_index(t_stacks *stacks, int max, int *run_sa,
		t_bench *bench)
{
	int	size;
	int	pos;

	size = lst_size(stacks->b);
	pos = find_pos_index(stacks->b, max);
	while (max != stacks->b->index)
	{
		if (max - 1 == stacks->b->index)
		{
			pa(&stacks->a, &stacks->b, bench, 1);
			*run_sa = 1;
		}
		else if (pos > size / 2)
			rrb(&stacks->b, bench, 1);
		else
			rb(&stacks->b, bench, 1);
	}
	return ;
}
