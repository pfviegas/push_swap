# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 11:17:30 by pviegas           #+#    #+#              #
#    Updated: 2023/07/05 16:27:53 by pviegas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -fsanitize=address -g

LIBFTDIR = libft/
OBJ_DIR = obj/
SRC_DIR = srcs/
BONUS = checker

SRC_1 = srcs/push_swap.c 

SRC_2 =	srcs/checks.c \
		srcs/lst_func_1.c \
		srcs/lst_func_2.c \
		srcs/ops_1.c \
		srcs/ops_2.c \
		srcs/ops_3.c \
		srcs/sorts.c \
		srcs/moves.c
#		srcs/push_swap/add_back.c \
		srcs/push_swap/stack_new.c \
		srcs/push_swap/ft_check_utils.c \
		srcs/push_swap/ft_parse.c \
		srcs/push_swap/solver_utils_ab.c \
		srcs/push_swap/solver_utils_ba.c \
		srcs/push_swap/ft_rotate_and_push.c \
		srcs/push_swap/operations.c \
		srcs/push_swap/operations_2.c \
		srcs/push_swap/operations_3.c \
		srcs/push_swap/ft_check_dup.c \
		srcs/push_swap/ft_check_sorted.c \
		srcs/push_swap/ft_error_print.c \
		srcs/push_swap/ft_free.c \
		srcs/push_swap/lst_utils.c \
		srcs/push_swap/lst_utils_2.c \
		srcs/push_swap/ft_parse_args_quoted.c \
		srcs/push_swap/ft_list_args.c \
		srcs/push_swap/ft_check_args.c \
		srcs/push_swap/ft_sort_big.c \
		srcs/push_swap/ft_sort_three.c \
		srcs/push_swap/ft_rotate_type.c \
		
BONUS_SRC = srcs/checker/checker.c \
			srcs/checker/checker_utils.c \
			

OBJ_1 = $(addprefix $(OBJ_DIR), $(notdir $(SRC_1:.c=.o)))
OBJ_2 = $(addprefix $(OBJ_DIR), $(notdir $(SRC_2:.c=.o)))

BONUS_OBJ = $(addprefix $(OBJ_DIR), $(notdir $(BONUS_SRC:.c=.o)))

INCLUDE = -L ./libft -lft

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	${CC} ${CFLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

${BONUS}: ${OBJ_2} ${BONUS_OBJ} 
	make -C $(LIBFTDIR)
	${CC} ${CFLAGS} ${BONUS_OBJ} ${OBJ_2} -o ${BONUS} ${INCLUDE}

all: ${NAME} ${BONUS}

bonus: ${BONUS} 

clean:
	${RM} ${OBJ_DIR}*.o ${NAME} ${BONUS}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re bonus
