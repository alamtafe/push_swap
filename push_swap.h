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

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

//  prototype of utils for sorting:
int					find_min(t_list *a);
int					find_pos(t_list *a, int value);
void				mov_min_to_top(t_list **lst, int min);
int					is_sorted(t_list *a);
// prototype parsing prototype :
t_list				*parsing(char *arg);
int				ft_atoi(char *str);
// prototype utils list  :
void				add_back(t_list **list, t_list *new);
t_list				*new_list(int value);
int					lst_size(t_list *lst);
// opration prototype :
void				swap(t_list **list);
void				sa(t_list **a);
void				sb(t_list **b);
void				ss(t_list **a, t_list **b);
void				push(t_list **dest, t_list **src);
void				pa(t_list **a, t_list **b);
void				pb(t_list **b, t_list **a);
void				rotate(t_list **list);
void				ra(t_list **a);
void				rb(t_list **b);
void				rr(t_list **a, t_list **b);
void				reverse_rotate(t_list **list);
void				rra(t_list **a);
void				rrb(t_list **b);
void				rrr(t_list **a, t_list **b);
// sorting ptototype :
void				selction_sort(t_list **a);
#endif