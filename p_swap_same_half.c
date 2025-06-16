/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_same_half.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:30:09 by pdessant          #+#    #+#             */
/*   Updated: 2025/05/03 17:33:09 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	same_half(t_stack **a, t_stack **b, void(*f1)(t_stack **, t_stack **),
	void(*f2)(t_stack **, char)) */

static void	moves_helper_f1(t_stack **a, t_stack **b, int *counter, t_f1 f1)
{
	f1(a, b);
	*counter += 1;
}

static void	moves_helper_f2(t_stack **stack, char c, int *counter, t_f2 f2)
{
	f2(stack, c);
	*counter += 1;
}

static void	init_half_params(t_stack **a, t_half_params *h)
{
	h->counter = 1;
	h->a_moves = (*a)->a_stack - 1;
	h->b_moves = (*a)->b_stack;
	h->tot_moves = (*a)->moves - 1;
}

void	same_half(t_stack **a, t_stack **b, t_f1 f1, t_f2 f2)
{
	t_half_params	h;

	init_half_params(a, &h);
	if (h.a_moves > h.b_moves)
	{
		while ((h.counter <= h.b_moves) && (h.b_moves != 0))
			moves_helper_f1(a, b, &h.counter, f1);
		while ((h.counter <= h.tot_moves) && (h.tot_moves != 0))
			moves_helper_f2(a, 'a', &h.counter, f2);
		push(a, b, 'b');
	}
	else if (h.a_moves == h.b_moves)
	{
		while (h.counter <= h.a_moves)
			moves_helper_f1(a, b, &h.counter, f1);
		push(a, b, 'b');
	}
	else if (h.b_moves > h.a_moves)
	{
		while (h.counter <= h.a_moves)
			moves_helper_f1(a, b, &h.counter, f1);
		while ((h.counter <= h.tot_moves) && (h.b_moves != 0))
			moves_helper_f2(b, 'b', &h.counter, f2);
		push(a, b, 'b');
	}
}
