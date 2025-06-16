/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_find_how_many_moves.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:54:56 by rockyd            #+#    #+#             */
/*   Updated: 2025/05/03 17:31:33 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	same_f_half_moves_nums_finder(t_stack *a, t_stack *b, t_calc calc)
{
	a->a_stack = calc(a, a->content) + 1;
	a->b_stack = calc(b, a->upper);
	if (a->a_stack > a->b_stack)
		return (a->a_stack);
	else if ((a->a_stack - 1) == a->b_stack)
		return (a->a_stack);
	else
		return (a->b_stack + 1);
}

static int	same_s_half_moves_nums_finder(t_stack *a, t_stack *b, t_calc calc)
{
	a->a_stack = calc(a, a->content) + 2;
	a->b_stack = calc(b, a->upper) + 1;
	if (a->a_stack > a->b_stack)
		return (a->a_stack);
	else if ((a->a_stack - 1) == a->b_stack)
		return (a->a_stack);
	else
		return (a->b_stack + 1);
}

int	find_how_many_moves(t_stack **a, t_stack **b, t_extremes *ex)
{
	char	is_there_val;

	is_there_val = find_to_where((*a)->content, *b, &(*a)->upper, ex->min);
	if (is_there_val == 'n')
		return (1);
	(*a)->a_half = which_half(*a, (*a)->content);
	(*a)->b_half = which_half(*b, (*a)->upper);
	if (((*a)->a_half == 1) && ((*a)->b_half == 1))
		return (same_s_half_moves_nums_finder(*a, *b, calc_second_half));
	else if (((*a)->a_half == 1) && ((*a)->b_half == 0))
	{
		(*a)->a_stack = calc_second_half(*a, (*a)->content) + 2;
		(*a)->b_stack = calc_first_half(*b, (*a)->upper);
		return ((*a)->a_stack + (*a)->b_stack);
	}
	else if (((*a)->a_half == 0) && ((*a)->b_half == 1))
	{
		(*a)->a_stack = calc_first_half(*a, (*a)->content) + 1;
		(*a)->b_stack = calc_second_half(*b, (*a)->upper) + 1;
		return ((*a)->a_stack + (*a)->b_stack);
	}
	else if (((*a)->a_half == 0) && ((*a)->b_half == 0))
		return (same_f_half_moves_nums_finder(*a, *b, calc_first_half));
	return (0);
}
