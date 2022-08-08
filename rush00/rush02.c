/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:32:27 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/07 14:36:11 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	create_line(int width, char start, char middle, char end)
{
	int	current_column;

	ft_putchar(start);
	current_column = 2;
	while (current_column < width)
	{
		ft_putchar(middle);
		current_column++;
	}
	if (current_column <= width)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	int	current_line;

	if (width <= 0 || height <= 0)
	{
		return ;
	}
	ft_putchar('\n');
	create_line(width, 'A', 'B', 'A');
	current_line = 2;
	while (current_line < height)
	{
		create_line(width, 'B', ' ', 'B');
		current_line++;
	}
	if (current_line <= height)
	{
		create_line(width, 'C', 'B', 'C');
	}
}
