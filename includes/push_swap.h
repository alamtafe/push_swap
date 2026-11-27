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

# define SIMPLE 0
# define MEDIUM 1
# define COMPLEX 2
# define ADAPTIVE 3
# define BENCH 4
# define BAD_FLAG 5

int					check_is_flag(char *av);
int					get_flag(char *av);
//  prototype of utils for sorting:
int					find_min(t_stack *a);
int					find_pos(t_stack *a, int value);
int					find_pos_index(t_stack *a, int index);
void				mov_min_to_top(t_stack **stack, int min, int size,
						t_bench *bench);
int					is_sorted(t_stack *a);
void				set_index(t_stack *stack);
int					find_sqrt(int n);
void				mov_max_to_top_index(t_stack **a, t_stack **b, int max,
						int *run_sa, t_bench *bench);
void				push_chunks(t_stacks *stacks, int chunk_size, int *min_max,
						t_bench *bench);
int					cal_max_bits(int n);
double				compute_disorder(t_stack *a);
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
// prototype parsing prototype :
t_stack				*parsing(int ac, char **av);
t_stack				*bonus_parsing(int ac, char **av);
// prototype utils stack  :
void				add_back(t_stack **stack, t_stack *new);
t_stack				*new_list(int value);
int					lst_size(t_stack *stack);
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
// sorting ptototype :
void				selction_sort(t_stacks *stacks, t_bench *bench);
void				chunk_sort(t_stacks *stacks, t_bench *bench);
void				radix_sort(t_stacks *stacks, t_bench *bench);
void				adaptive(t_stacks *stacks, t_bench *bench);
void				sort_stack(t_stacks *stacks, t_bench *bench, int strategy);
// print error
int					write_err(void);
// bonus prototyoe :
void				checker(t_stacks *stacks);
// bench prototype:
void				benchmark(t_bench *bench);
int					ft_putnbr(int n);
int					ft_putstr(char *s);
#endif