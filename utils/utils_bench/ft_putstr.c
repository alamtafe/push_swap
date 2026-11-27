#include "push_swap.h"

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		count += write(2, &s[i], 1);
		i++;
	}
	return (count);
}
