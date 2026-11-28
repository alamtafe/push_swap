/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:19:32 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/03 17:19:34 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	gnl_ft_strlen(char const *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strrchr(char *s, char c)
{
	size_t	i;

	if (!s)
		return (0);
	i = gnl_ft_strlen(s);
	while (i > 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return (1);
	return (0);
}

char	*gnl_ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;

	if (!s)
		return (NULL);
	i = gnl_ft_strlen(s);
	if (len > start - i)
		len = start - i;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[i + start])
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*create_string(char const *s1, char const *s2, char *res)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[j + i] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*res;
	size_t		len_s1;
	size_t		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = gnl_ft_strlen(s1);
	len_s2 = gnl_ft_strlen(s2);
	res = malloc(len_s1 + len_s2 + 1);
	if (!res)
		return (NULL);
	return (create_string(s1, s2, res));
}
