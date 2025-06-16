/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_which_half.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:11:04 by pdessant          #+#    #+#             */
/*   Updated: 2025/04/04 14:49:15 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	which_half(t_stack *list, int content)
{
	t_stack	*found_node;
	int		len;
	int		pos;
	int		half;

	pos = 1;
	len = p_swap_lstsize(list);
	if (len == 1)
		return (0);
	found_node = find_pos(list, content);
	if (!found_node)
		return (-1);
	set_to_head(&list);
	while (list != found_node)
	{
		pos++;
		list = list->next;
	}
	if (pos <= (len / 2) + (len % 2))
		half = 0;
	else
		half = 1;
	return (half);
}
