NAME = cnslib.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

SOURCE = cns_atoi.c    \
		 cns_isdigit.c \
		 cns_isspace.c

OBJS = $(SOURCE:.c=.o)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re