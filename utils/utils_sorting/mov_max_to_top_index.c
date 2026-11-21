/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_max_to_top_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:37:06 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/21 23:18:05 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mov_max_to_top_index(t_list **lst, int max)
{
	int	size;
	int	pos;

	size = lst_size(*lst);
	pos = find_pos_index(*lst, max);
	while (max != (*lst)->index)
	{
		if (pos > size / 2)
			rrb(lst);
		else
			rb(lst);
	}
	return ;
}
