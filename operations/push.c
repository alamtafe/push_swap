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

void	push(t_list **dest, t_list **src)
{
	t_list	*tmp;

	if (!dest || !src || !*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dest;
	*dest = tmp;
}

void	pa(t_list **a, t_list **b)
{
	push(a, b);
}

void	pb(t_list **b, t_list **a)
{
	push(b, a);
}
