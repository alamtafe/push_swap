/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:40:35 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/17 12:13:25 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selction_sort(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	while (*a)
	{
		if (is_sorted(*a))
			break ;
		mov_min_to_top(a, find_min(*a));
		pb(&b, a);
	}
	while (b)
		pa(a, &b);
	return ;
}
