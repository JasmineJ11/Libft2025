# hello: ft_isalnum.c ft_isalpha.c ft_isdigit.c
#	cc -Wall -Wextra -Werror -o hello ft_isalnum.c ft_isalpha.c ft_isdigit.c
NAME = libft.a

SRCS = ft_isalnum.c \
       ft_isdigit.c \
       ft_isalpha.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \

OBJ = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

# main.o : main.c
#	$(CC) $(CFLAGS) -c main.c

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

all: $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

test: test.c $(NAME)
	$(CC) $(CFLAGS) $^ -o hello
	./hello

//.SILENT:

.PHONY:	all clean fclean
