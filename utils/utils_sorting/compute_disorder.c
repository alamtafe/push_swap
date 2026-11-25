/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 18:17:26 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/25 18:42:14 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	compute_disorder(t_stack *a)
{
	int		pairs;
	int		mistakes;
	t_stack	*tmp;

	pairs = 0;
	mistakes = 0;
	if (lst_size(a) <= 1)
		return (0);
	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			pairs++;
			if (a->value > tmp->value)
				mistakes++;
			tmp = tmp->next;
		}
		a = a->next;
	}
	return ((double)mistakes / pairs);
}
