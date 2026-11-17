/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 12:13:12 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/17 12:13:15 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list *a)
{
	int min;

	min = a->value;
	while (a)
	{
		if (min > a->value)
			min = a->value;
		a = a->next;
	}
	return (min);
}