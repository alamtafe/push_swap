/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe <alamtafe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:04:38 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/10 14:38:12 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void    print_stack(t_stack *stack)
{
    while(stack)
    {
        printf("%d\n", stack->index);
        stack = stack->next;
    }
    return ;
}

int	main(int ac, char **av)
{
	t_stack *list;

	if(ac < 2)
	  return (0);
	list = parsing(ac, av);
	if(!list)
	   exit(1);
	set_index(list);
	selction_sort(&list);
	free_list(&list);
	return (0);
}