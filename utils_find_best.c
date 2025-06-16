/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_find_best.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:05:43 by pdessant          #+#    #+#             */
/*   Updated: 2025/04/04 14:42:25 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_best(t_stack **a)
{
	t_stack	*current;
	t_stack	*best_node;
	int		moves;

	current = *a;
	best_node = *a;
	moves = best_node->moves;
	while (current)
	{
		if (current->moves < moves)
		{
			moves = current->moves;
			best_node = current;
		}
		current = current->next;
	}
	*a = best_node;
}
