/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pos_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 23:05:52 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/21 23:16:18 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos_index(t_stack *a, int index)
{
	int	pos;

	pos = 0;
	while (index != a->index)
	{
		a = a->next;
		pos++;
	}
	return (pos);
}
