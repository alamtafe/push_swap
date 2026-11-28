/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe  <alamtafe@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/28 10:13:15 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/28 10:23:51 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_bench
{
	int				bench;
	double			disorder;
	char			*strategy;
	char			*complexity;
	int				ops;
	int				sa;
	int				sb;
	int				ss;
	int				pa;
	int				pb;
	int				ra;
	int				rb;
	int				rr;
	int				rra;
	int				rrb;
	int				rrr;
}					t_bench;

typedef struct s_stacks
{
	t_stack			*a;
	t_stack			*b;
}					t_stacks;
// prototype of utils for parsing:
long				ft_atol(char *str);
void				free_list(t_stack **list);
void				free_split(char **ar);
char				**ft_split(char const *s, char c);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_strdup(const char *s);
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *s);
int					ft_strcmp(const char *s1, const char *s2);
// prortype parsing:
t_stack				*bonus_parsing(int ac, char **av);
// opration prototype :
void				swap(t_stack **stack);
void				sa(t_stack **a, t_bench *bench, int print_op);
void				sb(t_stack **b, t_bench *bench, int print_op);
void				ss(t_stack **a, t_stack **b, t_bench *bench, int print_op);
void				push(t_stack **dest, t_stack **src);
void				pa(t_stack **a, t_stack **b, t_bench *bench, int print_op);
void				pb(t_stack **b, t_stack **a, t_bench *bench, int print_op);
void				rotate(t_stack **stack);
void				ra(t_stack **a, t_bench *bench, int print_op);
void				rb(t_stack **b, t_bench *bench, int print_op);
void				rr(t_stack **a, t_stack **b, t_bench *bench, int print_op);
void				reverse_rotate(t_stack **stack);
void				rra(t_stack **a, t_bench *bench, int print_op);
void				rrb(t_stack **b, t_bench *bench, int print_op);
void				rrr(t_stack **a, t_stack **b, t_bench *bench, int print_op);
// bonus prototyoe :
void				checker(t_stacks *stacks);
int					is_sorted(t_stack *a);
// prototype utils stack  :
void				add_back(t_stack **stack, t_stack *new);
t_stack				*new_list(int value);
int					lst_size(t_stack *stack);
#endif