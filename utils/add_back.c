#include "push_swap.h"

void    add_back(t_list **list, t_list *new)
{
    t_list  *tmp;

    if (!list)
        return ;
    if (!*list)
    {
        *list = new;
        return ;
    }
    tmp = *list;
    while(tmp->next)
    {  
        tmp = tmp->next;
    }
    tmp->next = new;
    return ;
}