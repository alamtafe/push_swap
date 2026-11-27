/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:19:03 by alamtafe          #+#    #+#             */
/*   Updated: 2026/11/03 17:19:04 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*clear(char **line, char *buffer)
{
	free(buffer);
	free(*line);
	*line = NULL;
	return (NULL);
}

char	*sparater(char **line)
{
	char	*tmp;
	char	*tmp_1;
	int		i;

	i = 0;
	while ((*line)[i] != '\n' && (*line)[i] != '\0')
		i++;
	if ((*line)[i] == '\n')
		i++;
	tmp = gnl_ft_substr(*line, 0, i);
	if (!tmp)
		return (clear(line, tmp));
	tmp_1 = *line;
	*line = gnl_ft_substr(*line, i, gnl_ft_strlen(*line) - i);
	if (!line)
	{
		free(tmp);
		free(tmp_1);
		return (NULL);
	}
	free(tmp_1);
	return (tmp);
}

char	*oef_handle(char **line, char *buffer)
{
	char	*tmp;

	tmp = gnl_ft_substr(*line, 0, gnl_ft_strlen(*line));
	if (tmp)
	{
		if (!tmp[0])
		{
			free(tmp);
			return (clear(line, buffer));
		}
		*line = clear(line, buffer);
		return (tmp);
	}
	return (clear(line, buffer));
}

char	*read_buffer(int fd, char **line, char *buffer)
{
	int		bytes_count;
	char	*tmp;

	while (!ft_strrchr(*line, '\n'))
	{
		bytes_count = read(fd, buffer, BUFFER_SIZE);
		if (bytes_count == 0)
			return (oef_handle(line, buffer));
		if (bytes_count < 0)
			return (clear(line, buffer));
		buffer[bytes_count] = '\0';
		tmp = ft_strjoin(*line, buffer);
		if (!tmp)
			return (clear(line, buffer));
		free(*line);
		*line = tmp;
	}
	free(buffer);
	return (sparater(line));
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (!line)
	{
		line = gnl_ft_substr("", 0, 0);
		if (!line)
		{
			free(buffer);
			return (NULL);
		}
	}
	return (read_buffer(fd, &line, buffer));
}
