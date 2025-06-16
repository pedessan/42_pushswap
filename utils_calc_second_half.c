/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_calc_second_half.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:10:07 by pdessant          #+#    #+#             */
/*   Updated: 2025/04/04 14:45:58 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calc_second_half(t_stack *list, int content)
{
	int		moves;
	t_stack	*pos;

	moves = 0;
	pos = find_pos(list, content);
	if (!pos)
		return (0);
	while (pos->next)
	{
		pos = pos->next;
		moves++;
	}
	return (moves);
}
