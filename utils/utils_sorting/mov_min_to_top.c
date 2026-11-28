/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_min_to_top.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 12:12:23 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/25 18:43:29 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mov_min_to_top(t_stack **stack, int min, int size, t_bench *bench)
{
	int	pos;

	pos = find_pos(*stack, min);
	while (min != (*stack)->value)
	{
		if (pos > size / 2)
			rra(stack, bench, 1);
		else
			ra(stack, bench, 1);
	}
	return ;
}
