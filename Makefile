NAME = libft.a

SRC = $(wildcard ft_*.c)

OBJ = $(SRC:%.c=%.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

%.o: %.c

	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

# test: ft_main.c $(NAME)
# 	$(CC) $(CFLAGS) ft_main.c libft.a -I. -o test
# 	./test

