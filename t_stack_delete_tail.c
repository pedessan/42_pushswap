/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_delete_tail.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:34:00 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 14:35:26 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_tail(t_stack **list)
{
	t_stack	*tmp;

	if (!list || !(*list))
		return ;
	set_to_tail(list);
	tmp = *list;
	*list = (*list)->prev;
	if (*list)
		(*list)->next = NULL;
	free(tmp);
}
