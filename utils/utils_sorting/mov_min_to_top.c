/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_min_to_top.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 12:12:23 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/17 12:12:38 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mov_min_to_top(t_list **lst, int min)
{
	int pos;
	int size;

	pos = find_pos(*lst, min);
	size = lst_size(*lst);
	while (min != (*lst)->value)
	{
		if (pos > size / 2)
			rra(lst);
		else
			ra(lst);
	}
	return ;
}