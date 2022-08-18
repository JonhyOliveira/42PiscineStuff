/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:19:26 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/17 19:46:59 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str( char *str )
{
	while (*str)
		write(1, str++, 1);
}

void	print_str_arr(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		put_str(arr[i++]);
		write (1, "\n", 1);
	}
}

int	main( int argc, char *argv[] )
{
	if (argc > 1)
		print_str_arr(argv + 1, argc - 1);
	return (0);
}
