# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 15:40:35 by hchahid           #+#    #+#              #
#    Updated: 2022/08/19 03:59:33 by hchahid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

NAME_B = checker

HEADER = mandatory/push_swap.h

HEADER_B = bonus/checker_bonus.h

SRC = mandatory/t_list/ft_lstlast.c mandatory/t_list/ft_lstsize.c mandatory/t_list/ft_lstnew.c  \
	mandatory/t_list/init_stack.c  mandatory/t_list/ft_lstadd_back.c mandatory/t_list/free_list.c \
	mandatory/moves/push.c mandatory/moves/rotate.c mandatory/moves/swap.c mandatory/moves/doubles.c \
	mandatory/utils/utils.c mandatory/utils/join_args.c mandatory/utils/utils1.c mandatory/utils/ft_split.c \
	mandatory/push_swap.c mandatory/errors/check_errors.c mandatory/errors/check_errors1.c \
	mandatory/sorting/sort_few.c mandatory/sorting/min_to_top_a.c \
	mandatory/sorting/lis/extract_lis.c mandatory/sorting/lis/lis_utils.c mandatory/sorting/lis/lis_utils1.c \
	mandatory/sorting/traveling_to_b.c mandatory/sorting/back_to_a.c mandatory/sorting/calculate_position.c \
	mandatory/sorting/mini_maxing.c mandatory/sorting/positions_in_stacks.c mandatory/sorting/handle_moves.c \
	mandatory/sorting/finishing.c 

SRC_B = bonus/moves_bonus/push_bonus.c bonus/moves_bonus/rotate_bonus.c bonus/moves_bonus/swap_bonus.c bonus/moves_bonus/doubles_bonus.c \
	bonus/checker_bonus.c bonus/utils_bonus/utils_bonus.c bonus/utils_bonus/utils1_bonus.c bonus/utils_bonus/ft_split_bonus.c\
	bonus/errors_bonus/check_errors_bonus.c bonus/errors_bonus/check_errors1_bonus.c \
	bonus/t_list_bonus/free_list_bonus.c bonus/t_list_bonus/ft_lstadd_back_bonus.c bonus/t_list_bonus/ft_lstlast_bonus.c bonus/t_list_bonus/ft_lstnew_bonus.c \
	bonus/t_list_bonus/ft_lstsize_bonus.c bonus/t_list_bonus/init_stack_bonus.c \
	bonus/get_next_line/get_next_line.c bonus/get_next_line/get_next_line_utils.c

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o)

RM = rm -f

$(NAME): $(OBJ) $(HEADER)
	cc $(OBJ) -o $(NAME)

$(NAME_B): $(OBJ_B) $(HEADER_B)
	cc $(OBJ_B) -o $(NAME_B)

%.o: %.c
	gcc -Wall -Wextra -Werror  -o $@ -c $<

all: $(NAME)

bonus: $(NAME_B)

clean:
	$(RM) $(OBJ) $(OBJ_B)

fclean: clean
	$(RM) $(NAME) $(NAME_B)

re: fclean all

.PHONY: clean fclean
