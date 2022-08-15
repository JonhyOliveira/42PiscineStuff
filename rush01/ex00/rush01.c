/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:03:01 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/14 15:29:17 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	write_str(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

// validates input from args and puts it into list 
int	validate(char *args[], int *list)
{
	int i;
	int g;

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			list[g] = argv[1][i] - '0';
		}
		else
			return (0);

		i += 2;
		g++;
	}
	if (g != 15)
		return (0);
	return (1);
}

int validate_board_c(int[] clues, int[] solution)
{
	int line;
	int col;
	
	while (col < 4)
	{	
		uniques[4] = { 0, 0, 0, 0 };
		while (line < 4)
		{
			if (uniques[solution[line][col]] != 0)
				return (0);
			uniques[solution[line][col]] = 1;
			line++;
		}
		col++;
	}
	return (1);
}

int validate_board_l(int[] clues, int[] solution)
{
	int line;
	int col;
	
	while (line < 4)
	{	
		uniques[4] = { 0, 0, 0, 0 };
		while (col < 4)
		{
			if (uniques[solution[line][col]] != 0)
				return (0);
			uniques[solution[line][col]] = 1;
			col++;
		}
		line++;
	}
	return (1);
}

int	validate_board(int[] clues, int[] solution)
{
	int line;
	int col;
	int uniques[4] = { 0, 0, 0, 0 };

	while (line < 4)
	{	
		uniques[4] = { 0, 0, 0, 0 };
		while (col < 4)
		{
			if (uniques[col] != 0)
				return (0);
			uniques[solution[line][col]] = 1;
		}
		l
	}
}

void	solve(int[] clues, int[] solution)
{
	int line;
	int col;

	while (line < 4)
	{
		while (col < 4)
		{
			if (solution[line][col] >= 4)
			col++;
		}
		line++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		clues[16];
	int		solution[16];
	int		g;

	i = 0;
	g = 0;
	if (argc == 2 && validate(argv, aux))
	{
		solve(clues, solution)
	}
	else
	{
		write_str(1, "Error\n", 1);
	}
	return (0);
}
//computer code rush01 
//please 
//until midnight
