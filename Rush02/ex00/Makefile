# Nome do programa
NAME = rush-02

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

# Ficheiros de fonte e diretórios
SRCS = src/check_char.c	     src/main.c       src/parse_str.c \
       src/print_nbr_chunks.c src/read_file.c  src/calc_word_span.c \
       src/check_file_size.c  src/parse_nbr.c  src/parse_word.c \
       src/print_word.c	     src/utils.c

OBJS = $(SRCS:.c=.o)

# Regras principais
all: $(NAME)

# Regra para compilar o programa
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Regra para remover os ficheiros de objeto
clean:
	rm -f $(OBJS)

# Regra para remover os ficheiros de objeto e o executável
fclean: clean
	rm -f $(NAME)

# Regra para recompilar tudo
re: fclean all

# Indicação para o Makefile não considerar estas regras como ficheiros
.PHONY: all clean fclean re
