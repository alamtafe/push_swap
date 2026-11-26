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

// void    print_stack(t_stack *stack)
// {
//     while(stack)
//     {
//         printf("%d\n", stack->index);
//         stack = stack->next;
//     }\
//     return ;
// }
int  write_err(void)
{
	write(2, "Error\n", 6);
	return (1);    
}
int	main(int ac, char **av)
{
	t_stack *list;
	t_strategy strategy;
	int i;
	int found_flag;

    found_flag = 0;
	strategy = ADAPTIVE;

	if(ac < 2)
	  return (0);
	i = 1;
	while(i < ac)
	{
	  if(check_is_flag(av[i]))
	  {
		if(found_flag)//check if we see flag
			return(write_err());
		strategy = get_flag(av[i]);
		 if(strategy == BAD_FLAG)
		   return(write_err());
		found_flag = 1;
 	 }
      i++;
   }
	list = parsing(ac, av);
	if(!list)
	   exit(1);
	set_index(list);
	//selction_sort(&list);
	sort_stack(&list, strategy);
	free_list(&list);
	return (0);
}