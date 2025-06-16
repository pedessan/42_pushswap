/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_best_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:04:47 by pdessant          #+#    #+#             */
/*   Updated: 2025/04/04 14:47:41 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	best_move(t_stack **a, t_stack **b, t_extremes *ex)
{
	t_stack	*current;

	current = *a;
	while (current)
	{
		current->moves = find_how_many_moves(&current, b, ex);
		current = current->next;
	}
	find_best(a);
}

/* printf (MAGENTA "\nDEBUG: a_value = %d\n  ---> %d moves\n"
	"  ---> a_half %d\n  ---> b_half %d\n"
	"  ---> a_stack %d\n  ---> b_stack %d\n"
	"  ---> upper %d\n" RESET,
	current->content, current->moves, current->a_half,
	current->b_half, current->a_stack, current->b_stack, current->upper); */
