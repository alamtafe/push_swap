/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 21:15:28 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/21 20:53:10 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 21:15:28 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/21 20:53:10 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calculate_chunk(t_stack *stack, int *chunks, int *chunk_size,
		int *remiander)
{
	int	size;

	size = lst_size(stack);
	if (size == 100)
		*chunks = 5;
	else if (size == 500)
		*chunks = 10;
	else
		*chunks = find_sqrt(size);
	*chunk_size = size / *chunks;
	*remiander = size % *chunks;
	return ;
}

void	back_to_a(t_stack **a, t_stack **b, int max)
{
	int	run_sa;

	run_sa = 0;
	while (*b)
	{
		mov_max_to_top_index(a, b, max, &run_sa);
		pa(a, b);
		if (run_sa)
		{
			sa(a);
			run_sa = 0;
			max--;
		}
		max--;
	}
}

void	chunk_sort(t_stack **a)
{
	int		chunks;
	int		chunk_size;
	int		remiander;
	t_stack	*b;
	int		min_max[2];

	b = NULL;
	calculate_chunk(*a, &chunks, &chunk_size, &remiander);
	min_max[1] = chunk_size - 1;
	min_max[0] = 0;
	while (chunks > 0)
	{
		push_chunks(a, &b, chunk_size, min_max);
		chunks--;
		if (chunks - 1 == 0)
			chunk_size += remiander;
		if (chunks != 0)
		{
			min_max[0] = min_max[1] + 1;
			min_max[1] += chunk_size;
		}
	}
	back_to_a(a, &b, min_max[1]);
	return ;
}
