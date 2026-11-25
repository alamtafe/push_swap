/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 19:23:32 by malouazz          #+#    #+#             */
/*   Updated: 2026/11/23 19:23:34 by malouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack  *new_list(int value)
{
    t_stack *list;

    list = malloc(sizeof(t_stack));
    if(!list)
        return (NULL);
    list->value = value;
    list->next = NULL;
    return (list);
}
