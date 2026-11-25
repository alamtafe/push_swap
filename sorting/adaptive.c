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

void	adaptive(t_stack **a)
{
	double	disored;

	disored = compute_disorder(*a);
	if (disored == 0.0)
		return ;
	if (disored < 0.2)
		selction_sort(a);
	else if (disored >= 0.2 && disored < 0.5)
		chunk_sort(a);
	else
		radix_sort(a);
	return ;
}
