# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 15:37:48 by kboulkri          #+#    #+#              #
#    Updated: 2023/11/20 19:41:44 by kboulkri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_convert_base.c ft_printf.c ft_putnbr.c ft_strlen.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

$(NAME):	$(OBJS)
				ar -rcs $(NAME) $(OBJS)

all :     	$(NAME)

clean: 	
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re