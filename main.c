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
		printf("%d\n", stack->value);
		stack = stack->next;
	}
	return ;
}

int	main(int argc, char **argv)
{
	t_stack  *a;
	int     i;

	i = 1;
	if (argc == 1)
	{
		write(2, "error\n", 6);
		return (0);
	}
	a = NULL;
	while (argv[i])
	{
		add_back(&a, parsing(argv[i]));
		i++;
	}
	set_index(a);
	chunk_sort(&a);
}
