/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:51:37 by pedessan          #+#    #+#             */
/*   Updated: 2025/04/04 14:46:29 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_swap_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	if (lst)
	{
		if (!(*lst))
		{
			*lst = new;
		}
		else
		{
			tmp = p_swap_lstlast(*lst);
			tmp->next = new;
			new->prev = tmp;
		}
	}
}
