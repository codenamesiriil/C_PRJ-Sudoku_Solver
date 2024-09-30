#include <stdio.h>
#include <stdlib.h>
#include "./cnslib/cns_atoi.c"

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
			matrix[i][j] = cns_atoi(*argv++);
			j++;
		}
		i++;
	}
}

int	test_input(char **argv)
{
	int i;

	i = 1;
	while (i < 82)
	{
		if (!cns_isdigit(argv[i][0]))
			return (0);
		if (argv[i][1] != '\0')
			return (0);
		i++;
	}
	return (1);

}

void	parse_input(char **argv, int matrix[9][9])
{
	if (!test_input(argv))
		exit(EXIT_FAILURE);
	else
		populate_matrix((argv + 1), matrix);
}

int	main(int argc, char **argv)
{
	if (argc != 82)
		return (EXIT_FAILURE);

	int	matrix[9][9];
	zero_matrix(matrix);

	parse_input(argv, matrix);
	print_matrix(matrix);
		
	return (EXIT_SUCCESS);
}