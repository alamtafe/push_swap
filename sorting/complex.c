#include "push_swap.h"

void	radix_sort(t_stack **a)
{
	t_stack *b;
	int max_bits;
	int i;
	int size;
	int j;

	b = NULL;
	size = lst_size(*a);
	max_bits = cal_max_bits(size - 1);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		if (i!= 0 && is_sorted(*a))
			break ;
		while (j < size)
		{
			if ((*a)->index >> i & 1)
				ra(a);
			else
				pb(&b, a);
			j++;
		}
		while (b)
			pa(a, &b);
		i++;
	}
	return ;
}