#include "rush02.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return count;
}

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

char	*ft_str_dup_printable(char *src)
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

// gets the value in a key,value line. if format is invalid returns
// NULL pointer
char	*get_value(char *line)
{
	while (*line == ' ' || (*line >= '0' && *line <= '9'))
		line++;
	if (*line++ != ':')
		return ((char *) 0);
	while (*line == ' ')
		line++;
	return (ft_str_dup_printable(line));
}

int	get_key_n_value(char *line, char **key_res, char **value_res)
{
	int count;
	int bckp;

	count = 0;
	*key_res = 0;
	*value_res = 0;
	while (line[count] >= '0' && line[count] <= '9')
		count++;
	if (count > 0)
	{
		bckp = line[count];
		line[count] = 0;
		*key_res = ft_str_dup_printable(line);
		line[count] = bckp;
		line += count;
		if (*line++ != ':')
			return (0);
		while (*line == ' ')
			line++;
		*value_res = ft_str_dup_printable(line);
		return (1);
	}
	return (0);
}

// finds a key in a dictionary file (FREE ME)
// returns a NULL pointer in case of error
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
			read_line(line, file_descriptor, &done);
			value = get_value(line);
			if (value && match_nbr(line, key))
				return (value);
		}
		close(file_descriptor);
		return (value);
	}
	return ((char *) 0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != 0 && *s2 != 0)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

int cmp(char *s1, char *s2)
{
	int	s1_len = ft_strlen(s1);
	int s2_len = ft_strlen(s2);
	if (s1_len - s2_len != 0)
		return s1_len - s2_len;
	else
		return ft_strcmp(s1, s2);
}

#include <stdio.h>

int	find_key_closest(char *file, char *key, char **key_result, char **value_result)
{
	int		done;
	int		file_descriptor;
	char	*line;
	char	*curr_key;
	char	*curr_value;
	int		curr_cmp;
	int		best_cmp;
	

	curr_value = (char *) 0;
	curr_key = (char *) 0;
	best_cmp = 12312312;
	file_descriptor = open(file, O_RDONLY);
	if (file_descriptor > 0)
	{
		done = 0;
		line = (char *) malloc(LINE_MAX_LENGTH);
		while (!done)
		{
			read_line(line, file_descriptor, &done);
			if (get_key_n_value(line, &curr_key, &curr_value))
			{
				printf("key: %s, value: %s | cmp: %d\n", curr_key, curr_value, cmp(key, curr_key));
				curr_cmp = cmp(key, curr_key);
				if (curr_cmp < best_cmp && curr_cmp > 0)
				{
					*key_result = curr_key;
					*value_result = curr_value;
				}
			}
//			value = get_value(line);
//			if (value && match_nbr(line, key))
//				return (value);
		}
		close(file_descriptor);
		if (*key_result && *value_result)
			return (1);
	}
	return (0);
}

int	rec_print(char *file, char *start, char *end, char **k, char **v)
{
	find_key_closest(file, )
}

int	main()
{
	char	*file_path;
	char	**found_key;
	char	**found_value;
	char	*our_nbr = "12241512";
	char	*aux = our_nbr;

	while (*aux)
	{
		if (*aux < '0' || *aux > '9')
		{
			printf("Error!\n");
			return 1;
		}
		aux++;
	}
	found_key = (char **) malloc(sizeof(char **));
	found_value = (char **) malloc(sizeof(char **));
	file_path = "dict";
	rec_print(file_path, out_nbr, aux, found_key, found_value);
	printf("%d\n", find_key_closest(file_path, "100000000000", found_key, found_value));
	printf("BEST - K: %s, V: %s\n", *found_key, *found_value);
//	printf("%s\n", find_key(file_path, "2"));
//	printf("%s\n", find_key(file_path, "4"));
//	printf("%s\n", find_key(file_path, "2222222222222222222222222222222222222222"));
}
