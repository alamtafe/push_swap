#include "push_swap.h"

t_list *parsing(char *arg)
{
    t_list *list;

    list = malloc(sizeof(list));
    if(!list)
        return (NULL);
    list->value = ft_atoi(arg);
    list->next = NULL;
    return(list);
}