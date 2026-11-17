/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:00:57 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/09 19:40:35 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*new_list(int value)
{
	t_list *list;

	list = malloc(sizeof(list));
	if (!list)
		return (NULL);
	list->value = value;
	list->next = NULL;
	return (list);
}