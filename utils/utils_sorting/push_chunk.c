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

int	chooser(t_list *a, int max, int min)
{
	int	match;
	int	size;
	int	i;
	int	j;

	i = 0;
	size = lst_size(a);
	while (a && (a->index < min || a->index > max))
	{
		i++;
		a = a->next;
	}
	match = i;
	j = i;
	while (a)
	{
		if (a->index >= min && a->index <= max)
			match = j;
		j++;
		a = a->next;
	}
	return (i < size - match);
}

static void	rotate_to_chunk(t_list **a, int max, int min)
{
	if (chooser(*a, max, min))
		ra(a);
	else
		rra(a);
	return ;
}

void	push_chunks(t_list **a, t_list **b, int chunk_size, int max)
{
	int	mid;
	int	j;
	int	min;

	j = 0;
	min = max - chunk_size + 1;
	mid = min - (min - max) / 2;
	while (j < chunk_size)
	{
		if ((*a)->index >= min && (*a)->index <= max)
		{
			pb(b, a);
			if ((*b)->index <= mid)
				rb(b);
			j++;
		}
		else
			rotate_to_chunk(a, max, min);
	}
	return ;
}
