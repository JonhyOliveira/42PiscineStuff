/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:59:51 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/07 18:28:18 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_line(int line_len, char first, char middle, char last)
{
	int	c;

	if (line_len >= 1)
	{
		write(1, &first, 1);
		c = 2;
		while (c < line_len)
		{
			write(1, &middle, 1);
			c++;
		}
		if (c == line_len)
			write(1, &last, 1);
		write(1, &"\n", 1);
	}
}

void	rush(int c_count, int l_count)
{
	int	l;

	if (l_count >= 1 && c_count >= 1)
	{
		print_line(c_count, 'A', 'B', 'C');
		l = 2;
		while (l < l_count)
		{
			print_line(c_count, 'B', ' ', 'B');
			l++;
		}
		if (l == l_count)
			print_line(c_count, 'C', 'B', 'A');
	}
}
