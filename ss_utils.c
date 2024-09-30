#include "sudoku_solver.h"

void	zero_matrix(int matrix[9][9])
{
	int i, j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	populate_matrix(char **argv, int matrix[9][9])
{
	int	i, j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			matrix[i][j] = cns_atoi((const char *)*argv++);
			j++;
		}
		i++;
	}
}

void	print_matrix(int matrix[9][9])
{
	int i, j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			printf("%d", matrix[i][j]);
			if (j != 8)
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
}
