CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = bsq

SRC = srcs/main.c	srcs/parsearg.c srcs/check_map.c srcs/ft_lib.c srcs/gen_tab.c \
	srcs/reader.c srcs/manage_memory.c srcs/readstdin.c srcs/solver.c srcs/tab_things.c \
	srcs/utilities.c	srcs/utilities2.c
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

.PHONY: all clean fclean all
