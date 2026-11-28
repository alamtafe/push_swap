/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 17:54:32 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/27 17:21:06 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack | !*stack)
		return ;
	if (!(*stack)->next)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
}

void	sa(t_stack **a, t_bench *bench, int print_op)
{
	swap(a);
	if (print_op)
		write(1, "sa\n", 3);
	bench->sa++;
	bench->ops++;
}

void	sb(t_stack **b, t_bench *bench, int print_op)
{
	swap(b);
	if (print_op)
		write(1, "sb\n", 3);
	bench->sb++;
	bench->ops++;
}

void	ss(t_stack **a, t_stack **b, t_bench *bench, int print_op)
{
	swap(a);
	swap(b);
	if (print_op)
		write(1, "ss\n", 3);
	bench->ss++;
	bench->ops++;
}
