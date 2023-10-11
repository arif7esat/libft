NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = $(shell find . -name "ft_lst*.c")
OBJ = $(SRC:.c=.o)
MAİN = $(shell find . -name "main.c")
RUN = gcc $(MAİN) $(NAME) -o 

all :$(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o
bonus:
	gcc $(FLAG) -c $(BONUS)
	ar rc $(NAME) *.o
run: $(NAME)
	gcc $(MAİN) $(NAME) -o run
clean:
	/bin/rm -f *.o

fclean: clean

	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re run
