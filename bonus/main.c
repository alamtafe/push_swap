/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 17:54:31 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/27 18:59:55 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_stacks	stacks;

	stacks.a = bonus_parsing(ac, av);
	if (!stacks.a)
		return (0);
	checker(&stacks);
	free_list(&stacks.a);
	return (0);
}
