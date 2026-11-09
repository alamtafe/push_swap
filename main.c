#include "push_swap.h"
#include <stdio.h>

void    print_list(t_list *list)
{
    while(list)
    {
        printf("%d\n", list->value);
        list = list->next;
    }
    return ;
}
int main(int argc, char **argv)
{
    int     i;
    t_list *a;

    i = 1;
    a = new_list(ft_atoi(argv[i]));
    if (argc == 1)
        write (2,"error\n",1);
    i++;
    while (i < argc)
    {
        add_back(&a,parsing(argv[i]));
        i++;
    }
    print_list(a);
}