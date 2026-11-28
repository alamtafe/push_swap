/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   benchmark.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 17:54:31 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/28 10:01:21 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_disorder(double disorder)
{
	int	first_part;
	int	second_part;

	first_part = (int)(disorder * 10000 + 0.5);
	second_part = first_part % 100;
	first_part = first_part / 100;
	ft_putnbr(first_part);
	write(2, ".", 1);
	if (second_part < 10)
		write(2, "0", 1);
	ft_putnbr(second_part);
	write(2, "%", 1);
	write(2, "\n", 1);
}

static void	second_part(t_bench *bench)
{
	ft_putstr("[bench] ra: ");
	ft_putnbr(bench->ra);
	ft_putstr(" rb: ");
	ft_putnbr(bench->rb);
	ft_putstr(" rr: ");
	ft_putnbr(bench->rr);
	ft_putstr(" rra: ");
	ft_putnbr(bench->rra);
	ft_putstr(" rrb: ");
	ft_putnbr(bench->rrb);
	ft_putstr(" rrr: ");
	ft_putnbr(bench->rrr);
	ft_putstr("\n");
}

void	benchmark(t_bench *bench)
{
	ft_putstr("[bench] disorder: ");
	print_disorder(bench->disorder);
	ft_putstr("[bench] strategy: ");
	ft_putstr(bench->strategy);
	ft_putstr("\n");
	ft_putstr("[bench] total_ops: ");
	ft_putnbr(bench->ops);
	ft_putstr("\n");
	ft_putstr("[bench] sa: ");
	ft_putnbr(bench->sa);
	ft_putstr(" sb: ");
	ft_putnbr(bench->sb);
	ft_putstr(" ss: ");
	ft_putnbr(bench->ss);
	ft_putstr(" pa: ");
	ft_putnbr(bench->pa);
	ft_putstr(" pb: ");
	ft_putnbr(bench->pb);
	ft_putstr("\n");
	second_part(bench);
}
