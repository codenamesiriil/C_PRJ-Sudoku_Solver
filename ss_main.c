#include "sudoku_solver.h"

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
