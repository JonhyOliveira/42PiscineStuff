/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:09:35 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/18 19:39:47 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h> 

int	str_len(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

// returns size of joint string, including NULL terminator
int	join_size(int size, char **strs, char *sep)
{
	int	join_size;
	int	strs_i;
	int	sep_size;

	if (size < 0)
		return (0);
	else
	{
		join_size = 0;
		strs_i = 0;
		sep_size = str_len(sep);
		while (strs_i < size)
		{
			join_size += str_len(strs[strs_i]);
			if (strs_i < size - 1)
				join_size += sep_size;
			strs_i++;
		}
		return (join_size + 1);
	}
}

// copies from src to dest and returns number of copied chars
int	strcpy_len(char *dest, char *src)
{
	int	count;

	count = 0;
	while (*src)
	{
		*dest++ = *src++;
		count++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	int		joined_i;
	int		strs_i;
	int		joined_size;

	joined_size = join_size(size, strs, sep);
	joined = (char *) 0;
	if (joined_size > 0)
	{
		joined = (char *) malloc(sizeof(char) * joined_size);
		strs_i = 0;
		joined_i = 0;
		while (strs_i < size)
		{
			joined_i += strcpy_len(joined + joined_i, strs[strs_i]);
			if (strs_i < size - 1)
			{
				joined_i += strcpy_len(joined + joined_i, sep);
			}
			strs_i++;
		}
		joined[joined_i] = 0;
	}
	return (joined);
}
