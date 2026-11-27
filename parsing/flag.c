#include "push_swap.h"

int  check_is_flag(char *av)
{
    if(av[0] == '-' && av[1] == '-')
      return (1);
    return (0);
}
int  get_flag(char *av)
{
    if (ft_strcmp(av, "--simple") == 0)
     return(SIMPLE);
    else if(ft_strcmp(av, "--medium") == 0)
      return (MEDIUM);
    else if(ft_strcmp(av, "--complex") == 0)
      return (COMPLEX);
    else if(ft_strcmp(av, "--adaptive") == 0)
      return (ADAPTIVE);
    return (BAD_FLAG);
}  
void        sort_stack(t_stack **a, int  strategy)
{
    if(strategy == SIMPLE)
      selction_sort(a);
    else if( strategy == MEDIUM)
    chunk_sort(a);
    else if(strategy == COMPLEX)
       radix_sort(a);
    else
     adaptive(a);
}  