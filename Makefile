DOTC = ft_itoa.c ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c ft_printf.c ft_utils.c
   
NAME = libftprintf.a
OBJECTS = $(DOTC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(DOTC)
	ar rcs $@ $(OBJECTS)
bonus:
	$(CC) $(CFLAGS) -c $(DOTC)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re