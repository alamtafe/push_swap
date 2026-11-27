#include "get_next_line.h"
#include "push_swap.h"
#include <stdio.h>

int	run_ops(t_stacks *stacks, char *line, t_bench *bench)
{
	if (ft_strcmp(line, "ra\n") == 0)
		ra(&stacks->a, bench, 0);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb(&stacks->b, bench, 0);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr(&stacks->a, &stacks->b, bench, 0);
	else if (ft_strcmp(line, "sa\n") == 0)
		sa(&stacks->a, bench, 0);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb(&stacks->b, bench, 0);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss(&stacks->a, &stacks->b, bench,0);
	else if (ft_strcmp(line, "rra\n") == 0)
		rra(&stacks->a, bench, 0);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb(&stacks->b, bench, 0);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr(&stacks->a, &stacks->b, bench, 0);
	else if (ft_strcmp(line, "pa\n") == 0)
		pa(&stacks->a, &stacks->b, bench, 0);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb(&stacks->b, &stacks->a, bench, 0);
	else 
	{
		write(1,"Error\n",6);
		return(0);
	}
	return(1);
}
void	checker(t_stacks *stacks)
{
	t_bench bench;
	char *line;
	stacks->b = NULL;
	ft_bzero(&bench, sizeof(t_bench));
	while ((line = get_next_line(0)))
	{
		if (!run_ops(stacks, line, &bench))
			return ;
		free(line);
	}
	if (stacks->b)
		write(1, "KO\n", 3);
	else if (is_sorted(stacks->a))
		write(1, "OK\n", 3);
	else 
		write(1,"KO\n",3);
	return ;
}