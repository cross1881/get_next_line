/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:32:57 by mrossett          #+#    #+#             */
/*   Updated: 2024/06/18 21:43:34 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read(int fd, char *buff, char *end)
{
	int		rl;
	char	*tmp;

	rl = 1;
	while (rl != '\0')
	{
		rl = read(fd, buff, BUFFER_SIZE);
		if (rl == -1)
			return (0);
		else if (rl == 0)
			break ;
		buff[rl] = '\0';
		if (!end)
			end = ft_strdup("");
		tmp = end;
		end = ft_strjoin(tmp, buff);
		free(tmp);
		tmp = NULL;
		if (ft_strchr (buff, '\n'))
			break ;
	}
	return (end);
}

static char	*ft_extract(char *line)
{
	size_t	i;
	char	*end;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\0' || line[1] == '\0')
		return (0);
	end = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*end == '\0')
	{
		free(end);
		end = NULL;
	}
	line[i + 1] = '\0';
	return (end);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buff;
	static char	*end;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (0);
	line = ft_read(fd, buff, end);
	free(buff);
	buff = NULL;
	if (!line)
		return (NULL);
	end = ft_extract(line);
	return (line);
}
