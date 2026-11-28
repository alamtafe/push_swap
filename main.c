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

int	write_err(void)
{
	write(2, "Error\n", 6);
	return (0);
}

int	check_bench(char *av)
{
	if (ft_strcmp(av, "--bench") == 0)
		return (1);
	return (0);
}

int	are_they_flags(int *strategy, t_bench *bench, int ac, char **av)
{
	int	i;
	int	found_flag;

	i = 0;
	found_flag = 0;
	while (i < ac)
	{
		if (check_bench(av[i]))
		{
			bench->bench += 1;
			if (bench->bench > 1)
				return (write_err());
		}
		else if (check_is_flag(av[i]))
		{
			found_flag++;
			if (found_flag > 1)
				return (write_err());
			*strategy = get_flag(av[i]);
			if (*strategy == BAD_FLAG)
				return (write_err());
		}
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_stacks	stacks;
	t_bench		bench;
	int			strategy;

	strategy = 3;
	ft_bzero(&bench, sizeof(t_bench));
	if (ac < 2)
		return (0);
	if (!(are_they_flags(&strategy, &bench, ac, av)))
		return (0);
	stacks.a = parsing(ac, av);
	if (!stacks.a)
		exit(1);
	set_index(stacks.a);
	sort_stack(&stacks, &bench, strategy);
	if (bench.bench == 1)
		benchmark(&bench);
	free_list(&stacks.a);
	return (0);
}
