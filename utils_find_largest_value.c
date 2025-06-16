/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_find_largest_value.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:36:59 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 16:39:19 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stack *a)
{
	int	max;

	max = a->content;
	while (a)
	{
		if (a->content > max)
			max = a->content;
		a = a->next;
	}
	return (max);
}

int	findlargestvalue(t_stack *lst)
{
	int	maxval;

	if (!lst)
		return (0);
	set_to_head(&lst);
	maxval = lst->content;
	while (lst->next)
	{
		lst = lst->next;
		if (lst->content > maxval)
			maxval = lst->content;
	}
	return (maxval);
}
