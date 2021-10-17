SRCS	=	./exit_client.c		\
			./main.c			\
			utils/ft_atoi.c		\
			utils/ft_memset.c	\
			utils/ft_putstr.c	\
			utils/ft_strlen.c	\

OBJS	=	${SRCS:.c=.o}

CC		=	clang

FLAG	=	-Wall -Wextra -Werror -fsanitize=address

NAME	=	client

.c.o:
		$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
			$(CC) $(FLAG) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re: fclean all

.phony: all re clean fclean
