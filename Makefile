NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c

OBJECTS = $(SRCS:%.c=%.o) 
OBJECTS_B = $(SRCS_B:%.c=%.o)


all: $(NAME)

.o.c: $(SRCS) $(SRCS_B)
	$(CC) $(CFLAGS) -L . -l ft.h -c $(SRCS) $(SRCS_B)

$(NAME) : $(OBJECTS)
		ar -rcs $@ $?

bonus : $(OBJECTS_B)
		ar -rcs $(NAME) $^

.PHONY: all clean re fclean bonus
clean: 
	rm -f $(OBJECTS) $(OBJECTS_B)
	
fclean: clean
	rm -f $(NAME)
		
re: fclean all
