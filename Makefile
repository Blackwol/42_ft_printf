SRCS = ft_isalpha.c convert.c ft_strdup.c ft_strjoin.c ft_putstr.c ft_putnbr.c ft_putchar.c print_args.c print_args2.c ft_printf.c ft_strlen.c

OBJS = ft_isalpha.o convert.o ft_strdup.o ft_strjoin.o ft_putstr.o ft_putnbr.o ft_putchar.o print_args.o print_args2.o ft_printf.o ft_strlen.o

NAME = libftprintf.a

CC		= gcc

AR		= ar rc

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror -c

all:		$(NAME)

$(NAME):	$(OBJS)
				$(AR) ${NAME} ${OBJS}

$(OBJS):
				$(CC) $(FLAGS) $(SRCS)

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re: 		fclean all
