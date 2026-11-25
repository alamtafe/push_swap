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
	int size = lst_size(*a);
	while (size > 1)
	{
		mov_min_to_top(a, find_min(*a));
		if (is_sorted(*a))
			break ;
		pb(&b, a);
		size--;
	}
	while (b)
		pa(a, &b);
	return ;
}
