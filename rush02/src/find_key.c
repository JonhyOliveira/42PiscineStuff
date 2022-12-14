/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:17:18 by lclaudio          #+#    #+#             */
/*   Updated: 2022/08/21 23:17:19 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

#define LINE_MAX_LENGTH 100

int	match_nbr(char *str, char *to_find)
{
	if (!*to_find && (*str < '0' || *str > '9' ))
		return (1);
	else if (!*str)
		return (0);
	if (*str == *to_find)
		return (match_nbr(str + 1, to_find + 1));
	return (0);
}

char	*ft_strdup_printable(char *src)
{
	char	*dest;
	char	*orig_dest;

	orig_dest = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	dest = orig_dest;
	if (dest)
	{
		while (*src >= 32 && *src < 127)
		{
			*dest++ = *src++;
		}
		*dest = 0;
	}
	return (orig_dest);
}

void	read_line(char *buf, int file_descriptor, int *done)
{
	read(file_descriptor, buf, 1);
	while (*buf != '\n' && *buf != 0)
	{
		buf++;
		read(file_descriptor, buf, 1);
	}
	if (*buf == 0)
		*done = 1;
	*buf = 0;
}

char	*get_key(char *line)
{
	while (*line == ' ' || (*line >= '0' && *line <= '9'))
		line++;
	if (*line++ != ':')
		return ((char *) 0);
	while (*line == ' ')
		line++;
	return (ft_strdup_printable(line));
}

char	*find_key(char *file, char *key)
{
	int		done;
	int		file_descriptor;
	char	*line;
	char	*value;

	file_descriptor = open(file, O_RDONLY);
	if (file_descriptor < 0)
		return ((char *) -1);
	line = (char *) malloc(LINE_MAX_LENGTH);
	if (!line)
		return ((char *) -1);
	done = 0;
	value = (char *) 0;
	while (!done)
	{
		read_line(line, file_descriptor, &done);
		if (match_nbr(line, key))
			value = get_key(line);
		if (value)
			done = 1;
	}
	free(line);
	close(file_descriptor);
	return (value);
}
