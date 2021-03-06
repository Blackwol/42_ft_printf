# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/26 15:46:41 by pcardoso          #+#    #+#              #
#    Updated: 2021/09/26 15:46:43 by pcardoso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

CC			= gcc
FLAGS		= -Wall -Wextra -Werror -c
LIB			= ar rc
LIB1		= ar -s
RM			= rm -rf

SRCS		= convert.c \
					print_args2.c \
					print_args.c \
					ft_printf.c

OBJS		= convert.o \
					print_args2.o \
					print_args.o \
					ft_printf.o

all:		$(NAME)

$(NAME):	$(OBJS) $(LIBFT)
			$(LIB)	$(NAME) $(OBJS)
			$(LIB1) $(NAME)

$(OBJS):
			$(CC) $(FLAGS) $(SRCS)

$(LIBFT):
			make all -C $(LIBFT_DIR)
			cp $(LIBFT) $(NAME)

clean:
			make clean -C $(LIBFT_DIR)
			$(RM) $(OBJS)

fclean:		clean
			make fclean -C $(LIBFT_DIR)
			$(RM) $(NAME)

re:			fclean all
