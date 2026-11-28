/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 17:54:32 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/27 17:22:40 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!stack || !*stack)
		return ;
	before_last = *stack;
	while (before_last->next->next)
		before_last = before_last->next;
	last = before_last->next;
	last->next = *stack;
	before_last->next = NULL;
	*stack = last;
}

void	rra(t_stack **a, t_bench *bench, int print_op)
{
	reverse_rotate(a);
	if (print_op)
		write(1, "rra\n", 4);
	bench->rra++;
	bench->ops++;
}

void	rrb(t_stack **b, t_bench *bench, int print_op)
{
	reverse_rotate(b);
	if (print_op)
		write(1, "rrb\n", 4);
	bench->rrb++;
	bench->ops++;
}

void	rrr(t_stack **a, t_stack **b, t_bench *bench, int print_op)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (print_op)
		write(1, "rrr\n", 4);
	bench->rrr++;
	bench->ops++;
}
