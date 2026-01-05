NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRCS    = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c 
OBJS    = $(SRCS:.c=.o)

all: $(NAME)

# $(NAME) kuralı $(OBJS)'e bağımlı. 
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

# .c dosyalarını tek tek .o'ya çeviren kural
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
