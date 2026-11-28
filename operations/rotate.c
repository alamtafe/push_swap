/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 17:54:32 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/27 17:23:16 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*first;

	if (!stack || !*stack)
		return ;
	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	*stack = (*stack)->next;
	first->next = NULL;
}

void	ra(t_stack **a, t_bench *bench, int print_op)
{
	rotate(a);
	if (print_op)
		write(1, "ra\n", 3);
	bench->ra++;
	bench->ops++;
}

void	rb(t_stack **b, t_bench *bench, int print_op)
{
	rotate(b);
	if (print_op)
		write(1, "rb\n", 3);
	bench->rb++;
	bench->ops++;
}

void	rr(t_stack **a, t_stack **b, t_bench *bench, int print_op)
{
	rotate(a);
	rotate(b);
	if (print_op)
		write(1, "rr\n", 3);
	bench->rr++;
	bench->ops++;
}
