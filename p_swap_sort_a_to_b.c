/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_sort_a_to_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:07:15 by pdessant          #+#    #+#             */
/*   Updated: 2025/05/03 17:35:41 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_a_to_b(t_stack **a, t_stack **b, t_extremes *ex)
{
	while (*a && a)
	{
		best_move(a, b, ex);
		push_to_b(a, b);
	}
	dec_order(b, ex);
	if (stack_b_is_sorted_checker(*b) == 1)
	{
		while (*b && b)
			push(b, a, 'a');
	}
}
