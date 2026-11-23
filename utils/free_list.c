/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 19:18:37 by malouazz          #+#    #+#             */
/*   Updated: 2026/11/23 19:18:48 by malouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_stack **list)
{
	t_stack *temp;
	if(!list)
	{
		return ;
	}
	while (*list)
	{
		temp = (*list)->next;
		free(*list);
		*list = temp;
	}
}
