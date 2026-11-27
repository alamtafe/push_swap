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
    else if(ft_strcmp(av, "--bench") == 0)
      return (BENCH);
    return (BAD_FLAG);
}  
void        sort_stack(t_stacks *stacks, t_bench *bench, int  strategy)
{
    if(strategy == SIMPLE)
    {
      bench->disorder = compute_disorder(stacks->a);
      selction_sort(stacks, bench);
      bench->strategy = "Simple o(n^2)";
    }else if( strategy == MEDIUM)
    {
      bench->disorder = compute_disorder(stacks->a);
      chunk_sort(stacks, bench);
      bench->strategy = "Medium O(n√n)";
    }else if(strategy == COMPLEX)
    { 
      bench->disorder = compute_disorder(stacks->a);
      radix_sort(stacks, bench);
      bench->strategy = "Complex o(n log n)";
    }else
     adaptive(stacks, bench);
}  
