/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:47:33 by pedessan          #+#    #+#             */
/*   Updated: 2025/04/29 16:46:53 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*p_swap_lstnew(int data)
{
	t_stack	*nd;

	nd = (t_stack *)malloc(sizeof(t_stack));
	if (!nd)
	{
		return (NULL);
	}
	nd->content = data;
	nd->moves = 0;
	nd->upper = 0;
	nd->lower = 0;
	nd->a_half = -1;
	nd->b_half = -1;
	nd->a_stack = 0;
	nd->b_stack = 0;
	nd->next = NULL;
	nd->prev = NULL;
	return (nd);
}
