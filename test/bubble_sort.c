/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 16:21:32 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/16 16:21:44 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_stack	*bubble_sort(t_stack *a)
{
	int		swap_flag;
	int		size;
	int		i;
	int		j;

	size = stack_size(a);
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		swap_flag = 0;
		while (j < size - 1) // 4 3 2 1  //    4 3 2 1                 2 1 3 4 
		{
			if (a->value > a->next->value)
			{
				sa(&a);
				swap_flag = 1;
			}
			if (is_sorted(a))
			{
				swap_flag = 0;
				break;
			}
			ra(&a);
			j++;
			if (j == size - 1)
				ra(&a);
		}
		if (!swap_flag)
			break ;
		i++;
	}
	return (a);
}