/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:07:23 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/10 13:40:36 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **dest, t_stack **src)
{
	t_stack	*first;

	if (!dest || !src || !*src)
		return ;
	first = *src;
	*src = (*src)->next;
	first->next = *dest;
	*dest = first;
}

void	pa(t_stack **a, t_stack **b, t_bench *bench, int print_op)
{
	push(a, b);
	if (print_op)
		write(1, "pa\n", 3);
	bench->pa++;
	bench->ops++;
}

void	pb(t_stack **b, t_stack **a, t_bench *bench, int print_op)
{
	push(b, a);
	if (print_op)
		write(1, "pb\n", 3);
	bench->pb++;
	bench->ops++;
}
