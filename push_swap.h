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
	struct s_list	*next;
}					t_list;

int					ft_atoi(char *str);
// parsing prototype :
t_list				*parsing(char *arg);
// list prototype :
void				add_back(t_list **list, t_list *new);
t_list				*new_list(int value);
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
#endif