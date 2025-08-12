CC = gcc
CFLAGS = -g3
SRCS = main.c
OBJS = $(SRCS:.c=.o)
NAME = ft_ls

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -lm

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -lm

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
