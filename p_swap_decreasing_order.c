/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_decreasing_order.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:02:52 by pdessant          #+#    #+#             */
/*   Updated: 2025/03/25 10:03:23 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dec_order(t_stack **b, t_extremes *ex)
{
	int	half_side;

	half_side = which_half(*b, ex->max);
	if (half_side == 0)
	{
		while (((*b)->content != ex->max) && *b && b)
			rotate(b, 'b');
	}
	else if (half_side == 1)
	{
		while (((*b)->content != ex->max) && *b && b)
			reverse_r(b, 'b');
	}
}
