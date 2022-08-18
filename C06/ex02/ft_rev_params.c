/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:37:49 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/17 19:22:24 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main( int argc, char *argv[] )
{
	int	argv_i;

	argv_i = argc - 1;
	while (argv_i >= 1)
	{
		put_str(argv[argv_i--]);
		write(1, "\n", 1);
	}
	return (1);
}
