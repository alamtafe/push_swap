/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:40:35 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/17 12:13:25 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selction_sort(t_stacks *stacks, t_bench *bench)
{
	int	size;

	size = lst_size(stacks->a);
	stacks->b = NULL;
	while (size > 1)
	{
		mov_min_to_top(&stacks->a, find_min(stacks->a), size, bench);
		if (is_sorted(stacks->a))
			break ;
		pb(&stacks->b, &stacks->a, bench, 1);
		size--;
	}
	while (stacks->b)
		pa(&stacks->a, &stacks->b, bench, 1);
	return ;
}
