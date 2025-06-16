/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_5_find_to_where.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:32:16 by pdessant          #+#    #+#             */
/*   Updated: 2025/05/03 17:16:58 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	bring_up(t_stack **a, int which_half, int min)
{
	int	pos;
	int	counter;

	pos = 0;
	counter = 0;
	if (which_half == 0)
	{
		pos = calc_first_half(*a, min);
		while (counter < pos)
		{
			rotate(a, 'a');
			counter++;
		}
	}
	else if (which_half == 1)
	{
		pos = calc_second_half(*a, min);
		while (counter <= pos)
		{
			reverse_r(a, 'a');
			counter++;
		}
	}
}

void	five_nums(t_stack **a)
{
	t_stack		*b;
	int			min;
	int			count;
	int			to_send;

	b = NULL;
	min = 0;
	count = 0;
	to_send = 2;
	if (check_if_stack_is_sorted(*a) == 0)
	{
		while (count < to_send)
		{
			min = find_min(*a);
			bring_up(a, which_half(*a, min), min);
			push(a, &b, 'b');
			count++;
		}
		triad_case(a, 'a');
		push(&b, a, 'a');
		push(&b, a, 'a');
		free_list(a);
	}
}
