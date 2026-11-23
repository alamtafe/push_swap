/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 19:12:46 by malouazz          #+#    #+#             */
/*   Updated: 2026/11/23 19:12:54 by malouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void    add_back(t_stack **list, t_stack *new)
{
    t_stack  *tmp;

    if (!list)
        return ;
    if (!*list)
    {
        *list = new;
        return ;
    }
    tmp = *list;
    while(tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = new;
    return ;
}
