/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_find_upper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:34:52 by pdessant          #+#    #+#             */
/*   Updated: 2025/03/26 14:30:08 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	find_upper(int content, t_stack *b, int *upper)
{
	int	found;

	found = 0;
	if (!b)
		return ('n');
	set_to_head(&b);
	while (b)
	{
		if (b->content < content)
		{
			if (!found || b->content > *upper)
			{
				*upper = b->content;
				found = 1;
			}
		}
		b = b->next;
	}
	if (!found)
		return ('n');
	return ('y');
}
