#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stacks stacks;

	stacks.a = bonus_parsing(ac, av);
    if(!stacks.a)
        return(0);
    checker(&stacks);
    free_list(&stacks.a);
    return(0);
}