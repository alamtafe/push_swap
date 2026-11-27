/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 18:55:15 by malouazz          #+#    #+#             */
/*   Updated: 2026/11/23 18:55:23 by malouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define INT_MAX 2147483647
#define INT_MIN -2147483648

static int	check_valid_num(char *av)
{
	int	i;

	i = 0;
	if (av[i] == '+' || av[i] == '-')
		i++;
	if (!av[i])
		return (0);
	while (av[i])
	{
		if (!(av[i] >= '0' && av[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

static int	check_overflow(char *s)
{
	long	n;

	n = ft_atol(s);
	if (n > INT_MAX || n < INT_MIN)
		return (0);
	return (1);
}

static int	has_duplicate(t_stack *list, int val)
{
	while (list)
	{
		if (list->value == val)
		{
			return (1);
		}
		list = list->next;
	}
	return (0);
}

static int	add_parst(t_stack **list, char **par)
{
	t_stack	*new;
	int		i;
	int		val;

	i = 0;
	if (!par || !par[0])
		return (0);
	while (par[i])
	{
		if (!check_valid_num(par[i]) || !check_overflow(par[i]))
			return (0);
		val = (int)ft_atol(par[i]);
		if (has_duplicate(*list, val))
			return (0);
		new = new_list(val);
		if (!new)
			return (0);
		add_back(list, new);
		i++;
	}
	return (1);
}
t_stack	*bonus_parsing(int ac, char **av)
{
	t_stack	*list;
	char	**pars;
	int		start;

	start = 1;
	list = NULL;
	while (start < ac)
	{
		pars = ft_split(av[start], ' ');
		if (!add_parst(&list, pars))
		{
			free_split(pars);
			free_list(&list);
			write(2, "Error\n", 6);
			return (NULL);
		}
		free_split(pars);
		start++;
	}
	return (list);
}
