NAME = sudoku_solver

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

CNSLIB_DIR = ./cnslib/
CNSLIB = $(CNSLIB_DIR)cnslib.a

HDRS = sudoku_solver.h
SOURCE = ss_parser.c ss_utils.c ss_main.c
OBJS = $(SOURCE:.c=.o)

all: $(CNSLIB) $(NAME)

$(CNSLIB):
	@$(MAKE) -C $(CNSLIB_DIR)

$(NAME): $(OBJS) $(CNSLIB)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(CNSLIB_DIR) -l:cnslib.a

%.o: %.c $(HDRS)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C $(CNSLIB_DIR) clean

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(CNSLIB_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
