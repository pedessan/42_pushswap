/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_calc_first_half.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:09:13 by pdessant          #+#    #+#             */
/*   Updated: 2025/04/04 16:22:34 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calc_first_half(t_stack *list, int content)
{
	int		moves;
	t_stack	*pos;

	moves = 0;
	pos = find_pos(list, content);
	if (!pos)
		return (0);
	while (pos->prev)
	{
		pos = pos->prev;
		moves++;
	}
	return (moves);
}
