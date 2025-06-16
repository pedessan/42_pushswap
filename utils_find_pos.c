/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_find_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:11:54 by pdessant          #+#    #+#             */
/*   Updated: 2025/03/26 14:40:32 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_pos(t_stack *list, int content)
{
	while (list)
	{
		if (list->content == content)
			return (list);
		list = list->next;
	}
	return (NULL);
}
