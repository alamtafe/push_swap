#include "push_swap.h"
#include <stdio.h>

void    print_stack(t_stack *stack)
{
    while(stack)
    {
        printf("%d\n", stack->value);
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
    print_stack(list);
	free_list(&list);
	return (0);
}