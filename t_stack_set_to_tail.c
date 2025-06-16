/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_set_to_tail.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:32:27 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 14:35:57 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_to_tail(t_stack **lst)
{
	if (!lst || !(*lst))
		return ;
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
}
