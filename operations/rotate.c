/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:08:47 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/10 13:45:36 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **list)
{
	t_list	*last;
	t_list	*first;

	if (!list || !*list)
		return ;
	first = *list;
	last = *list;
	while (last->next)
		last = last->next;
	last->next = first;
	*list = (*list)->next;
	first->next = NULL;
}

void	ra(t_list **a)
{
	rotate(a);
}

void	rb(t_list **b)
{
	rotate(b);
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
}
