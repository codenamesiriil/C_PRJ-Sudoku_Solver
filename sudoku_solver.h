#ifndef SUDOKU_SOLVER_H
# define SUDOKU_SOLVER_H

# include <stdio.h>
# include <stdlib.h>
# include "./cnslib/cnslib.h"

// Parser functions
int	    test_input(char **argv);
void	parse_input(char **argv, int matrix[9][9]);

// Utils
void	zero_matrix(int matrix[9][9]);
void	populate_matrix(char **argv, int matrix[9][9]);
void	print_matrix(int matrix[9][9]);

#endif 