/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:47:25 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/05 16:46:42 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_formatted(int first, int second, int is_first)
{
	char	first_first;
	char	first_second;
	char	second_first;
	char	second_second;

	first_first = '0' + first / 10;
	first_second = '0' + first % 10;
	second_first = '0' + second / 10;
	second_second = '0' + second % 10;
	if (!is_first)
	{
		write(1, &", ", 2);
	}	
	write(1, &first_first, 1);
	write(1, &first_second, 1);
	write(1, &" ", 1);
	write(1, &second_first, 1);
	write(1, &second_second, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;
	int	is_first;

	first = 0;
	second = 0;
	is_first = 1;
	while (first < 100)
	{
		second = first + 1;
		while (second < 100)
		{
			print_formatted(first, second, is_first);
			is_first = 0;
			second++;
		}
		first++;
	}
}
