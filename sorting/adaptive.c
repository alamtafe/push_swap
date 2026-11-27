/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 22:43:03 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/25 19:10:52 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive(t_stacks *stacks, t_bench *bench)
{
	bench->disorder = compute_disorder(stacks->a);
	if (bench->disorder  == 0.0)
		return ;
	if (bench->disorder  < 0.2)
	{
		selction_sort(stacks, bench);
		bench->strategy = "adaptive O(n^2)";
	}else if (bench->disorder  >= 0.2 && bench->disorder  < 0.5)
	{	
		chunk_sort(stacks, bench);
		bench->strategy = "adaptive O(n√n)";
	}else{
		radix_sort(stacks, bench);
		bench->strategy = "adaptive O(n log n)";
	}
	return ;
}
