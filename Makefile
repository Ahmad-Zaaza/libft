NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c

OBJECTS = $(SRCS:%.c=%.o)

all: $(NAME)

.o.c: $(SRCS)
	$(CC) $(CFLAGS) -L . -l ft.h -c $(SRCS)

$(NAME) : $(OBJECTS)
		ar -rcs $@ $?

.PHONY: all clean re fclean
clean: 
	rm -f $(OBJECTS)
	
fclean: clean
	rm -f $(NAME)
	
	
re: fclean all
