/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_find_smallest_value.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:37:30 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 16:21:43 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_stack *a)
{
	int	min;

	min = a->content;
	while (a)
	{
		if (a->content < min)
			min = a->content;
		a = a->next;
	}
	return (min);
}

/* int	findSmallestValue(t_stack *lst, int *result)
{
	if (!lst) 
		return (1);
	set_to_head(&lst);
	*result = lst->content;
	while (lst)
	{
		if (lst->content < *result)
			*result = lst->content;
		lst = lst->next;
	}
	return (0);
} */

int	min_val(t_stack *list)
{
	int	val;

	set_to_head(&list);
	val = list->content;
	while (list)
	{
		if (list->content < val)
			val = list->content;
		list = list->prev;
	}
	return (val);
}
