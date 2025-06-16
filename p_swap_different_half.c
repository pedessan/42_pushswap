/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_different_half.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:34:03 by pdessant          #+#    #+#             */
/*   Updated: 2025/04/04 16:01:38 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	different_half(t_stack **a, t_stack **b, void(*f1)(t_stack **, char),
	void(*f2)(t_stack **, char)) */

void	different_half(t_stack **a, t_stack **b, t_f2 f1, t_f2 f2)
{
	int	counter;
	int	a_moves;
	int	b_moves;
	int	tot_moves;

	counter = 1;
	a_moves = (*a)->a_stack - 1;
	b_moves = (*a)->b_stack;
	tot_moves = (*a)->moves - 1;
	while (counter <= a_moves)
	{
		f1(a, 'a');
		counter++;
	}
	while ((counter <= tot_moves) && (b_moves != 0))
	{
		f2(b, 'b');
		counter++;
	}
	push(a, b, 'b');
}

/* printf(YELLOW "counter = %d\n(*a)->a_stack - 1 = %d\n\n" RESET,
	counter, a_moves); */
