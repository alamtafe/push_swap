/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 19:21:41 by malouazz          #+#    #+#             */
/*   Updated: 2026/11/23 19:22:27 by malouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_w(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	*free_res(char **res)
{
	int	i;

	i = 0;
	while (res[i] != NULL)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	const char	*start_s;

	int (i), (j);
	j = 0;
	i = 0;
	res = (char **)ft_calloc(count_w(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			break ;
		start_s = &(s[i]);
		while (s[i] && s[i] != c)
			i++;
		res[j] = ft_substr(start_s, 0, &s[i] - start_s);
		if (res[j] == NULL)
			return (free_res(res));
		j++;
	}
	res[j] = NULL;
	return (res);
}
