/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_check_if_stack_is_sorted.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:34:48 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 14:26:03 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_stack_is_sorted(t_stack *list)
{
	set_to_head(&list);
	if (!list || !list->next)
		return (1);
	while (list->next)
	{
		if (list->content > list->next->content)
			return (0);
		list = list->next;
	}
	return (1);
}

int	stack_b_is_sorted_checker(t_stack *list)
{
	set_to_head(&list);
	if (!list || !list->next)
		return (1);
	while (list->next)
	{
		if (list->content < list->next->content)
			return (0);
		list = list->next;
	}
	return (1);
}
