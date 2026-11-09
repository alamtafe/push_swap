#include "push_swap.h"

t_list  *new_list(int value)
{
    t_list *list;

    list = malloc(sizeof(list));
    if(!list)
        return (NULL);
    list->value = value;
    list->next = NULL;
    return (list);
}