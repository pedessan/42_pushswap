/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_push_to_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:05:19 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 16:23:57 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_stack **a, t_stack **b)
{
	int	len;

	len = p_swap_lstsize(*b);
	if (len < 2)
	{
		push(a, b, 'b');
		set_to_head(b);
		return ;
	}
	if (((*a)->a_half == 1) && ((*a)->b_half == 1))
		same_half(a, b, rrr, reverse_r);
	else if (((*a)->a_half == 0) && ((*a)->b_half == 0))
		same_half(a, b, rr, rotate);
	else if (((*a)->a_half == 1) && ((*a)->b_half == 0))
		different_half(a, b, reverse_r, rotate);
	else if (((*a)->a_half == 0) && ((*a)->b_half == 1))
		different_half(a, b, rotate, reverse_r);
}

/* 	printf (C "\nDEBUG: find_best = %d\n  ---> %d moves\n"
		"  ---> a_half %d\n  ---> b_half %d\n"
		"  ---> a_stack %d\n  ---> b_stack %d\n"
		"  ---> upper %d\n" RESET,
		(*a)->content, (*a)->moves, (*a)->a_half, (*a)->b_half,
		(*a)->a_stack, (*a)->b_stack, (*a)->upper); */
