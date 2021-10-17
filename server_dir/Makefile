SRCS	=	./exit_serv.c		\
			./main.c			\
			utils/ft_atoi.c		\
			utils/ft_itoa.c		\
			utils/ft_memset.c	\
			utils/ft_putstr.c	\
			utils/ft_strlen.c	\

OBJS	=	${SRCS:.c=.o}

CC		=	clang

FLAG	=	-Wall -Wextra -Werror -fsanitize=address

NAME	=	server

.c.o:
		$(CC) $(FLAG) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
			$(CC) $(FLAG) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re: fclean all

.phony: all re clean fclean
