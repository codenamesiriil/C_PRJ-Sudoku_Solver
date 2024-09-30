#include "sudoku_solver.h"

int	test_input(char **argv)
{
	int i;

	i = 1;
	while (i < 82)
	{
		if (!cns_isdigit((int)argv[i][0]))
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
