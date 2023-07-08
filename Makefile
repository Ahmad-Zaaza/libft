NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJECTS = *.o


.PHONY: clean 

FILES = ft_atoi.c ft_bzero.c ft_isalnum.c is_alpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c 

$(NAME) : $(FILES)
		$(CC) $(CFLAGS) -L libft.h -c $(FILES)

clean: $(OBJECTS)
		rm -f $(NAME)
