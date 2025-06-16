/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_free_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:36:19 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 14:30:42 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_stack **list)
{
	t_stack	*tmp;
	t_stack	*next;

	set_to_head(list);
	tmp = *list;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*list = NULL;
}
