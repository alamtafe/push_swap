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

void	mov_max_to_top_index(t_stack **a, t_stack **b, int max, int *run_sa)
{
	int	size;
	int	pos;

	size = lst_size(*b);
	pos = find_pos_index(*b, max);
	while (max != (*b)->index)
	{
		if (max - 1 == (*b)->index)
		{
			pa(a, b);
			*run_sa = 1;
		}
		else if (pos > size / 2)
			rrb(b);
		else
			rb(b);
	}
	return ;
}
