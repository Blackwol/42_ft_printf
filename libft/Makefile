# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/26 15:47:50 by pcardoso          #+#    #+#              #
#    Updated: 2021/09/26 15:47:53 by pcardoso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += ft_strlen.c ft_strdup.c \
		   ft_strjoin.c ft_putchar.c ft_putstr.c ft_putnbr.c

OBJS += ft_strlen.o ft_strdup.o \
		   ft_strjoin.o ft_putchar.o ft_putstr.o ft_putnbr.o

NAME	= libft.a

CC		= gcc

AR		= ar rc

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror -c

all:		$(NAME)

$(NAME):	$(OBJS)
				$(AR) ${NAME} ${OBJS}
				ar -s ${NAME}

$(OBJS):
				$(CC) $(FLAGS) $(SRCS)

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re: 		fclean all
