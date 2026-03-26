NAME = libpushswap.a
CC = cc
FLAGS = -Wall -Wextra -Werror

SRC = swap.c push.c rotate.c reverse_rotate.c ft_string_arg.c
OBJ = $(SRC:.c=.o)

LIBFTPRINTF = ft_printf/libftprintf.a

all: $(NAME)

$(LIBFTPRINTF):
	make -C ft_printf

$(NAME): $(OBJ) $(LIBFTPRINTF)
	cp $(LIBFTPRINTF) $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	make -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re