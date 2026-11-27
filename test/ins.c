/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 18:23:14 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/17 11:08:25 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ins(int *arr, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		tmp = arr[i + 1]; //4
		if (arr[i] > tmp)
		{
			j = i;
			while (j >= 0)
			{
				if (arr[j] > tmp)
				{
					arr[j + 1] = arr[j];
				}
				else
				{
					arr[j + 1] = tmp;
					break ;
				}
				j--;
			}
			if (j < 0)
				arr[0] = tmp;
		}
		i++;
	}
}
#include <stdio.h>

int	main(void)
{
	int	arr[];
	int	i;

	arr[] = {4, 3, 2, 1};
	ins(arr, 4);
	i = 0;
	while (i < 4)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
// tmp = 2
// i = 1
// j = 1
// arr =  3 4 4 1