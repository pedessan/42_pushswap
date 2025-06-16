/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_find_to_where.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:39:23 by pdessant          #+#    #+#             */
/*   Updated: 2025/04/04 16:39:44 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	find_to_where(int content, t_stack *b, int *upper, int min)
{
	int	max_b;
	int	min_b;

	if (!b)
		return ('n');
	set_to_head(&b);
	max_b = findlargestvalue(b);
	min_b = find_min(b);
	if (content > max_b || content == min || content < min_b)
	{
		*upper = max_b;
		return ('y');
	}
	return (find_upper(content, b, upper));
}
