/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_delete_head.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:33:12 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 14:27:24 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_head(t_stack **list)
{
	t_stack	*tmp;

	if (!list || !(*list))
		return ;
	set_to_head(list);
	tmp = *list;
	*list = (*list)->next;
	if (*list)
		(*list)->prev = NULL;
	free(tmp);
}
