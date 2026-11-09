#ifndef push_swap_h
# define push_swap_h

typedef struct s_list
{
    int             value;
    struct s_list   *next;
} t_list;

# include <stdlib.h>
# include <unistd.h>
int ft_atoi(char *str);
// parsing function :
t_list *parsing(char *arg);
// list function :
void    add_back(t_list **list, t_list *new);
t_list  *new_list(int value);
#endif