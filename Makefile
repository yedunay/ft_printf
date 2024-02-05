DOTC = ft_itoa.c ft_utilities.c ft_printf.c
   
NAME = libftprintf.a
OBJECTS = $(DOTC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(DOTC)
	ar rcs $@ $(OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)	

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re