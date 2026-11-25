/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 12:13:34 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/25 18:42:42 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		if (tmp && a->value > tmp->value)
			return (0);
		a = a->next;
	}
	return (1);
}
