# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 18:09:09 by miguelhenri       #+#    #+#              #
#    Updated: 2025/03/07 11:27:39 by mpitta-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra

SOURCES = main.c ft_new_stack.c ft_find_errors.c ft_stack_utils.c \
	  ft_sort_stacks.c ft_sort_three.c ft_median.c ft_rotate.c \
	  ft_ops.c ft_order.c 

OBJECTS = $(SOURCES:.c=.o)

CLR_RMV         := \033[0m
RED                 := \033[1;31m
GREEN           := \033[1;32m
YELLOW          := \033[1;33m
BLUE            := \033[1;34m
CYAN            := \033[1;36m

${NAME}: $(OBJECTS)
		@echo "${CLR_RMV}$(GREEN)⏳ Compiling ${YELLOW}$(NAME)... 🤓"
		@make bonus -C libft > /dev/null 2>&1
		@cp libft/libft.a .
		@${CC} ${CFLAGS} -o ${NAME} ${OBJECTS} libft.a
		@echo "$(BLUE)🖨️  All tasks done successfully!🤓"

all: ${NAME}

%.o: %.c
		@${CC} ${CFLAGS} -c $< -o $@

clean:
	@make clean -C libft --no-print-directory
	@rm -f $(OBJECTS)
	@ echo "$(RED)Deleting $(CYAN)objects ..."
	@ echo "$(BLUE)All objects cleaned successfully! 🧹🗑️"
	@ echo ""

fclean: clean
	@make fclean -C libft --no-print-directory
	@rm -f $(NAME) libft.a
	@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_BLUERMV)bynary ..."
	@ echo "$(BLUE)Everything clean! 🧹🗑️"
	@ echo ""

re: fclean all

.PHONY: all bonus clean fclean re