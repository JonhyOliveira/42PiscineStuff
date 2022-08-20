/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:36:43 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/21 00:35:19 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define LINE_MAX_LENGTH 100

// checks if a is printable
int	ft_str_is_printable(char c);

// gets a str's size
int ft_strlen(char *str); 

// receives a NULL terminated string and duplicates to heap, 
// returning a pointer to it
// or a NULL pointer if it's not printable
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

// reads a line from a file to the buffer
void	read_line(char *buf, int buf_size, int file_descriptor, int *done)
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

// matchs two number strings
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

// finds a key in a dictionary file (FREE ME)
// returns 0 if didnt find.
// returns -1 if couldn't open file
char	*find_key(char *file, char *key)
{
	int		done;
	int		file_descriptor;
	char	*line;
	char	*value;

	value = (char *) 0;
	file_descriptor = open(file, O_RDONLY);
	if (file_descriptor > 0)
	{
		done = 0;
		line = (char *) malloc(LINE_MAX_LENGTH);
		while (!done)
		{
			read_line(line, LINE_MAX_LENGTH, file_descriptor, &done);
			if (match_nbr(line, key))
			{
				while (*line == ' ' || (*line >= '0' && *line <= '9'))
					line++;
				if (*line++ != ':')
					continue;
				while (*line == ' ')
					line++;
				value = ft_strdup_printable(line);
				break;
			}
		}
		close(file_descriptor);
		return (value);
	}
	return ((char *) 0);
}

#include <stdio.h>
int	main()
{
	char	*file_path;

	file_path = "dict";
	printf("%s", find_key(file_path, "1000000000000000000000000000000000000"));
}
