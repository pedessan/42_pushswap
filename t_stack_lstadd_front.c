/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_lstadd_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:44:28 by pedessan          #+#    #+#             */
/*   Updated: 2025/04/04 14:49:35 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_swap_lstadd_front(t_stack **lst, t_stack *new)
{
	if (lst && new)
	{
		set_to_head(lst);
		if (!(*lst))
		{
			*lst = new;
		}
		else
		{
			new->next = *lst;
			new->prev = NULL;
			(*lst)->prev = new;
			*lst = new;
		}
	}
}
