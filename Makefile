
NAME = push_swap

INC = -I.

LIBFT = ./libft/libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror -g

SRCS =	\
		t_stack_delete_head.c \
		t_stack_delete_tail.c \
		t_stack_free_list.c \
		t_stack_lstadd_back.c \
		t_stack_lstadd_front.c \
		t_stack_lstlast.c \
		t_stack_lstnew.c \
		t_stack_lstsize.c \
		t_stack_set_to_head.c \
		t_stack_set_to_tail.c \
		\
		utils_calc_first_half.c \
		utils_calc_second_half.c \
		utils_find_best.c \
		utils_find_pos.c \
		utils_which_half.c \
		utils_check_if_stack_is_sorted.c \
		utils_find_largest_value.c \
		utils_find_smallest_value.c \
		utils_print_stack.c \
		\
		p_swap_check_chars.c \
		p_swap_args_checker.c \
		p_swap_vals_cmp.c \
		p_swap_check_the_only_arg.c \
		p_swap_parsing_values.c \
		p_swap_create_stack_A.c \
		p_swap_find_upper.c \
		p_swap_find_to_where.c \
		p_swap_best_move.c \
		p_swap_find_how_many_moves.c \
		p_swap_same_half.c \
		p_swap_different_half.c \
		p_swap_decreasing_order.c \
		p_swap_push_to_b.c \
		p_swap_sort_a_to_b.c \
		rules_rotate_reverse_r.c \
		rules_rr_rrr.c \
		rules_swap_push.c \
		base_3_numbers_case.c \
		base_3_main_function.c \
		base_5_numbers_case.c \
		main.c

GREEN = \033[0;32m
YELLOW = \033[0;33m
PURPLE = \033[0;35m
NO_COLOR = \033[0m

all: ${LIBFT} ${NAME}

${LIBFT}: 
	@make bonus -C libft

# %.o: %.c
# 	${CC} ${FLAGS} ${INC} -c $< -o $@

# ${NAME}: ${OBJS} ${LIBFT}
# 	${CC} ${OBJS} ${LIBFT} ${FLAGS} -o ${NAME}
# 	@echo "${GREEN}Program successfully compiled!${NO_COLOR}"

${NAME}: ${SRCS}
	${CC} ${FLAGS} ${SRCS} ${LIBFT} -o ${NAME}
	@echo "${GREEN}Program successfully compiled!${NO_COLOR}"

clean:
	@make clean -C libft

fclean: clean
	@make fclean -C libft
	rm -f ${NAME}

re: fclean all 

.PHONY: all clean fclean re


# NAME = pushswap

# INC = -I.

# LIBFT = ./libft/libft.a

# CC = cc

# FLAGS = -Wall -Wextra -Werror -g

# SRCS =	\
# #		init.c \
# #		alg.c \
# 		main.c

# OBJS = ${SRCS:.c=.o}

# GREEN = \033[0;32m
# YELLOW = \033[0;33m
# PURPLE = \033[0;35m
# NO_COLOR = \033[0m


# all:${NAME}

# ${LIBFT}:
# 	@make -C libft

# %.o: %.c
# 	${CC} ${FLAGS} ${INC} -c $< -o $@

# ${NAME}: ${LIBFT} ${OBJS}

# 	${CC} ${OBJS} ${LIBFT} ${FLAGS} -o ${NAME}
# 	@echo "${GREEN}program successfully compiled!${NO_COLOR}"

# clean:
# 	@make clean -C libft
# 	rm -f ${OBJS}

# fclean: clean
# 	@make fclean -C libft
# 	rm -f ${NAME}

# re: fclean all 

# .PHONY: all clean fclean re

