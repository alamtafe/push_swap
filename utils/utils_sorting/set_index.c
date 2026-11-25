/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 12:06:07 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/17 20:21:21 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	set_index(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*tmp_1;
	int		i;

	tmp_1 = stack;
	while (stack)
	{
		tmp = tmp_1;
		i = 0;
		while (tmp)
		{
			if (stack->value > tmp->value)
				i++;
			tmp = tmp->next;
		}
		stack->index = i;
		stack = stack->next;
	}
	return ;
}
