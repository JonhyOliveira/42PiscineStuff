/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:43:23 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/17 19:50:15 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != 0 && *s2 != 0)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_str_tab(char **tab, int size)
{
	char	**last;
	char	**other;

	last = tab + size - 1;
	while (tab < last)
	{
		other = tab + 1;
		while (other <= last)
		{
			if (ft_strcmp(*other, *tab) < 0)
				ft_swap(other, tab);
			other++;
		}
		tab++;
	}
}

void	print_str_arr(char **arr, int count)
{
	int	arr_i;
	int	str_i;

	arr_i = 0;
	while (arr_i < count)
	{
		str_i = 0;
		while (arr[arr_i][str_i])
		{
			write(1, &arr[arr_i][str_i++], 1);
		}
		write (1, "\n", 1);
		arr_i++;
	}
}

int	main( int argc, char *argv[] )
{
	if (argc > 1)
	{
		ft_sort_str_tab(argv + 1, argc - 1);
		print_str_arr(argv + 1, argc - 1);
	}
	return (1);
}
