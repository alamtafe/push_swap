/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 16:21:10 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/16 16:21:12 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  mov_max_to_top(t_stack **stack, int max)
{
	int	pos;
	int	size;

	pos = find_pos(*stack, max);
	size = stack_size(*stack);
	while (max != (*stack)->value)
	{
		if (pos > size / 2)
			rrb(stack);
		else
			rb(stack);
	}
	return ;
}
int	find_max(t_stack *stack)
{
	int	max;

	max = stack->value;
	while (stack)
	{
		if (max < stack->value)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}
void	check_it(int value,t_stack **b, int size)
{
	int	i;

	i = 0; // 1 2
	while (i < size - 1)  //       1 4 2 3     
	{
		if ((*b)->value > (*b)->next->value)
		{
			rb(b);
		}else
		{
			if (value > (*b)->next->value)
				rb(b);
		}
		i++;
	}
	return ;
}

int find_match(int value, t_stack **b)
{
	int	size;
	int i;

	size = stack_size(*b);
	i = 0;
	while(i < size)
	{ 
		if (value < (*b)->value) 
 			rb(b);
		else
		{
			return(1);
		}
		i++;
	}
	return (0) ; 
}
t_stack	*insertion_sort(t_stack *a)
{
	t_stack *b;
	int size;
	int i;

	b = NULL;
	pb(&b, &a);
	pb(&b, &a); // 4 3 // 2 1
	if (b->value < b->next->value)
		sb(&b);
	i = 0;
	size = stack_size(a);
	while (i < size)
	{
		if (find_match(a->value, &b))
		{
			pb(&b,&a);
				
		}else
		{
			pb(&b,&a);
			rb(&b);
		}
		i++;
	}
	while (b)
		pa(&a, &b);
	return (a);
}