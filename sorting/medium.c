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

void	calculate_chunk(t_list *lst, int *chunks, int *chunk_size,
		int *remiander)
{
	int	size;

	size = lst_size(lst);
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

void	back_to_a(t_list **a, t_list **b, int max)
{
	while (*b)
	{
		mov_max_to_top_index(b, max);
		max--;
		pa(a, b);
	}
}

void	chunk_sort(t_list **a)
{
	int		chunks;
	int		chunk_size;
	int		remiander;
	t_list	*b;
	int		max;

	b = NULL;
	calculate_chunk(*a, &chunks, &chunk_size, &remiander);
	max = chunk_size - 1;
	while (chunks > 0)
	{
		push_chunks(a, &b, chunk_size, max);
		chunks--;
		if (chunks - 1 == 0)
			chunk_size += remiander;
		if (chunks != 0)
			max += chunk_size;
	}
	back_to_a(a, &b, max);
	return ;
}
