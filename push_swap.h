/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:55:19 by rockyd            #+#    #+#             */
/*   Updated: 2025/05/03 17:16:49 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* LIBRARIES */

# include "./libft/libft.h"

/* COLORS */

// Definizione dei colori ANSI
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"

# define C "\033[1;32m"

# define INT_MIN -2147483648
# define INT_MAX 2147483647

/*-------------------STRUCT------------------:)*/

typedef struct s_extremes
{
	long	min;
	long	max;
}	t_extremes;

typedef struct s_half_params
{
	int	counter;
	int	a_moves;
	int	b_moves;
	int	tot_moves;
}	t_half_params;

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				content;
	int				moves;
	int				upper;
	int				lower;
	int				a_half;
	int				b_half;
	int				a_stack;
	int				b_stack;
	int				min;

}	t_stack;

/*-------------------F_ALIAS------------------:)*/

typedef void	(*t_f1)(t_stack **, t_stack **);
typedef void	(*t_f2)(t_stack **, char);
typedef int		(*t_calc)(t_stack *, int);

/* PROTOTYPES */

/*-------------------RULES-------------------:)*/

void	swap(t_stack **list, char stack_name);
void	push(t_stack **main_list, t_stack **where_to_push, char stack_name);
void	rotate(t_stack **list, char stack_name);
void	rr(t_stack **a, t_stack **b);
void	reverse_r(t_stack **list, char stack_name);
void	rrr(t_stack **a, t_stack **b);

/*--------------------LIST--------------------:)*/

t_stack	*p_swap_lstnew(int data);
t_stack	*p_swap_lstlast(t_stack *lst);
int		p_swap_lstsize(t_stack *lst);
void	set_to_head(t_stack **lst);
void	set_to_tail(t_stack **lst);
void	delete_head(t_stack **list);
void	delete_tail(t_stack **list);
void	p_swap_lstadd_back(t_stack **lst, t_stack *new);
void	p_swap_lstadd_front(t_stack **lst, t_stack *new);
t_stack	*create_stack_a(long *ar, int len);
void	free_list(t_stack **list);

/*-------------------UTILS--------------------:)*/

int		findlargestvalue(t_stack *lst);
int		check_if_stack_is_sorted(t_stack *list);
int		stack_b_is_sorted_checker(t_stack *list);
void	print_stack(t_stack *list, char stack_name);
void	push_swap(t_stack **a);

/*--------------LESS THAN 6 CASES-------------:)*/

t_stack	*case_1(t_stack *list, char stack_name);
t_stack	*case_2(t_stack *list, char stack_name);
t_stack	*case_3(t_stack *list, char stack_name);
t_stack	*case_4(t_stack *list, char stack_name);
t_stack	*case_5(t_stack *list, char stack_name);
void	triad_case(t_stack **list, char stack_name);
void	five_nums(t_stack **a);
int		matrix_len(int case_i, char **s);
int		check_string(char *s);
int		check_chars(int i_case, char **s);
long	*ar_dup(long *vals, int size);
int		vals_cmp(long *vals, int size);
int		get_numbers(int case_i, char **s, long **ar, int *len);
int		check_the_only_arg(int ac, char *s, long **ar, int *len);
int		args_checker(char **av, long **ar, int *len);
int		parsing_values(int ac, char **av, long **ar, int *len);

int		find_min(t_stack *a);
int		find_max(t_stack *a);
char	find_upper(int content, t_stack *b, int *upper);
char	find_to_where(int content, t_stack *b, int *upper, int min);
t_stack	*find_pos(t_stack *list, int content);
int		which_half(t_stack *list, int content);
int		calc_first_half(t_stack *list, int content);
int		calc_second_half(t_stack *list, int content);
int		find_how_many_moves(t_stack **a, t_stack **b, t_extremes *ex);
void	find_best(t_stack **a);
void	best_move(t_stack **a, t_stack **b, t_extremes *ex);
void	same_half(t_stack **a, t_stack **b, t_f1 f1, t_f2 f2);
void	different_half(t_stack **a, t_stack **b, t_f2 f1, t_f2 f2);
void	dec_order(t_stack **b, t_extremes *ex);
void	push_to_b(t_stack **a, t_stack **b);
void	sort_a_to_b(t_stack **a, t_stack **b, t_extremes *ex);
void	print_ar(int size, long *num);

#endif
