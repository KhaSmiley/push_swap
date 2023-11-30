# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 21:55:09 by kboulkri          #+#    #+#              #
#    Updated: 2023/11/20 19:23:00 by kboulkri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRC_1	=	srcs/push_swap.c\

SRC_2	=	srcs/checker_two.c\
			srcs/checker.c\
			srcs/find_place.c\
			srcs/free.c\
			srcs/ft_check_sorted.c\
			srcs/ft_error_atoi.c\
			srcs/ft_error.c\
			srcs/ft_rotate_and_push.c\
			srcs/ft_rotate_type.c\
			srcs/ft_sort_tiny.c\
			srcs/ft_sort.c\
			srcs/lst_utils.c\
			srcs/push.c\
			srcs/reverse_rotate.c\
			srcs/rotate.c\
			srcs/solver_utils_ab.c\
			srcs/solver_utils_ba.c\
			srcs/stack_creation.c\
			srcs/storage.c\
			srcs/swap.c\

OBJS_DIR	=	objs
OBJS_1		=	$(SRC_1:$(SRC_1)/%.c=$(OBJS_DIR)/%.o)
OBJS_2		=	$(SRC_2:$(SRC_2)/%.c=$(OBJS_DIR)/%.o)

LIBFT		=	libft/libft.a
LIBFT_DIR	=	libft

CPPFLAGS	=	-I./include -I./libft/
CFLAGS		=	-Wall -Werror -Werror -g3

$(NAME):		$(OBJS_1) $(OBJS_2)
					$(MAKE) -C $(LIBFT_DIR)
					cc $(CFLAGS) $(CPPFLAGS) $(OBJS_1) $(OBJS_2) -o $(NAME) $(LIBFT)

all:			$(NAME)

clean:
					rm -rf $(OBJS_DIR)
					$(MAKE) clean -C $(LIBFT_DIR)

fclean:				clean
						rm -f $(NAME)
						rm -f $(NAME_BONUS)
						$(MAKE) fclean -C $(LIBFT_DIR)

re:					fclean all

.PHONY:				all clean fclean re