/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 18:24:56 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/25 16:59:20 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calculate_chunk(t_stack *stack, int *max)
{
	int	size;

	size = lst_size(stack);
	*max = find_sqrt(size) + 5;
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
int	push_and_chose(t_stack **a, t_stack **b, int *range, int *run_rr)
{
	if ((*a)->index <= range[0])
	{
		if (*run_rr)
			rb(b);
		pb(b, a);
		*run_rr = 1;
		(range[0])++;
	}
	else if ((*a)->index <= range[0] + range[1])
	{
		if (*run_rr)
		{
			rb(b);
			*run_rr = 0;
		}
		pb(b, a);
		(range[0])++;
	}
	else
		return (1);
	return (0);
}
void	bringe_to_top(t_stack **a, t_stack **b, int *run_rr)
{
	if (*run_rr)
	{
		rr(b, a);
		*run_rr = 0;
	}
	else
		ra(a);
}
void	range_sort(t_stack **a)
{
	t_stack	*b;
	int		run_rr;
	int		min_max[2];

	b = NULL;
	run_rr = 0;
	calculate_chunk(*a, &min_max[1]);
	min_max[0] = 0;
	while (*a)
	{
		if (push_and_chose(a, &b, min_max, &run_rr))
			bringe_to_top(a, &b, &run_rr);
	}
	if (run_rr)
		rb(&b);
	back_to_a(a, &b, lst_size(b) - 1);
	return ;
}