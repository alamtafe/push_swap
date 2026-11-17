/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 12:11:42 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/17 12:12:03 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos(t_list *a, int value)
{
	int pos;

	pos = 0;
	while (value != a->value)
	{
		a = a->next;
		pos++;
	}
	return (pos);
}