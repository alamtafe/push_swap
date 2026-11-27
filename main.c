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

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->index);
		stack = stack->next;
	}
	return ;
}

int	main(int ac, char **av)
{
	t_stacks	stacks;
	t_bench		bench;

	if (ac < 2)
		return (0);
	stacks.a = parsing(ac, av);
	if (!stacks.a)
		exit(1);
	ft_bzero(&bench, sizeof(t_bench));
	set_index(stacks.a);
	adaptive(&stacks, &bench);
	benchmark(&bench);
	free_list(&stacks.a);
	return (0);
}
