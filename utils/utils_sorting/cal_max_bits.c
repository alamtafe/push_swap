#include "push_swap.h"

int cal_max_bits(int n)
{
    int i;

    i = 0;
    while((n >> i) > 0)
        i++;
    return (i);
}
