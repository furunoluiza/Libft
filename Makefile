NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
FILES = ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlen.c \
	ft_tolower.c ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c \
	ft_strncmp.c ft_toupper.c ft_calloc.c ft_isdigit.c ft_memcpy.c \
	ft_strlcat.c ft_strnstr.c ft_isalnum.c ft_isprint.c ft_memmove.c \
	ft_strlcpy.c ft_strrchr.c
OBJECTS = $(FILES:.c=.o) 
RM = rm -f

all: $(NAME) clean

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(FILES)
	$(CC) $(FLAGS) -c $(FILES)

clean: 
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
