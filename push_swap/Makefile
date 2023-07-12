# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 11:17:30 by pviegas           #+#    #+#              #
#    Updated: 2023/07/12 16:20:29 by pviegas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -g -fsanitize=address

LIBFTDIR = libft/
OBJ_DIR = obj/
SRC_DIR = srcs/

SRC_1 = srcs/push_swap.c 

SRC_2 =	srcs/apply_moves.c \
		srcs/checks.c \
		srcs/count_moves_1.c \
		srcs/count_moves_2.c \
		srcs/count_moves_3.c \
		srcs/moves_1.c \
		srcs/moves_2.c \
		srcs/moves_3.c \
		srcs/sorts.c \
		srcs/stack_funcs_1.c \
		srcs/stack_funcs_2.c \
		srcs/stack_funcs_3.c

OBJ_1 = $(addprefix $(OBJ_DIR), $(notdir $(SRC_1:.c=.o)))
OBJ_2 = $(addprefix $(OBJ_DIR), $(notdir $(SRC_2:.c=.o)))

INCLUDE = -L ./libft -lft

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	${CC} ${CFLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}


all: ${NAME}

clean:
	${RM} ${OBJ_DIR}*.o ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re 
