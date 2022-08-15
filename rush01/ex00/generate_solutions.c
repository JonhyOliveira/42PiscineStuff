#include <stdlib.h>

int	increment_rec(int** solution, int* line, int* col)
{
	if (solution[*line][*col] == 4)
	{
		if (*line == 4 && *col == 4)
			return (0);
		solution[*line][*col] = 1;
		if (*col == 4)
			*line += 1;
		else
			*col += 1;
		increment_rec(solution, line, col);
	}
	else
		solution[*line][*col] += 1;
	return (1);
}
# include <stdio.h>
void	print_solution(int **solution)
{
	int line;
	int col;
	
	line = 0;
	col = 0;
	while (line < 4)
	{
		while (col < 4)
		{
			printf("%i ", solution[line][col]);
			col++;
		}
		printf("\n");
		line++;
	}
}

void	find_solution()
{
	int line;
	int col;
	int solution[5][5];
	
	line = 0;
	col = 0;
	while (line < 4)
	{
		col = 0;
		while (col < 4)
		{
			printf("%i %i\n", line, col);
			solution[line][col] = 1;
	printf("ok");
			col++;
		}
		line++;
	}
	printf("ok");
	line = 0;
	col = 0;
	while (increment_rec(solution, &line, &col))
	{
		print_solution(solution);
	}
		
}

int main()
{
	find_solution();
}
