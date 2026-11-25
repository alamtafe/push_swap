/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:00:57 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/10 16:21:40 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

//  prototype of utils for sorting:
int					find_min(t_stack *a);
int					find_pos(t_stack *a, int value);
int					find_pos_index(t_stack *a, int index);
void				mov_min_to_top(t_stack **stack, int min);
int					is_sorted(t_stack *a);
void				set_index(t_stack *stack);
int					find_sqrt(int n);
void				mov_max_to_top_index(t_stack **a, t_stack **b, int max,
						int *run_sa);
void				push_chunks(t_stack **a, t_stack **b, int chunk_size,
						int *min_max);
// prototype parsing prototype :
t_stack				*parsing(char *arg);
int					ft_atoi(char *str);
// prototype utils stack  :
void				add_back(t_stack **stack, t_stack *new);
t_stack				*new_stack(int value);
int					lst_size(t_stack *stack);
// opration prototype :
void				swap(t_stack **stack);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				push(t_stack **dest, t_stack **src);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **b, t_stack **a);
void				rotate(t_stack **stack);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				reverse_rotate(t_stack **stack);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
// sorting ptototype :
void				selction_sort(t_stack **a);
void				chunk_sort(t_stack **a);
#endif