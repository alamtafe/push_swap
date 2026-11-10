/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:09:01 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/09 21:09:01 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **list)
{
	t_list	*last;
	t_list	*before_last;

	if (!list || !*list)
		return ;
	before_last = *list;
	while (before_last->next->next)
		before_last = before_last->next;
	last = before_last->next;
	last->next = *list;
	before_last->next = NULL;
	*list = last;
}

void	rra(t_list **a)
{
	reverse_rotate(a);
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}
