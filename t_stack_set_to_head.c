/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_set_to_head.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:31:31 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 16:37:46 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_to_head(t_stack **lst)
{
	if (!lst || !(*lst))
		return ;
	while ((*lst)->prev != NULL)
		*lst = (*lst)->prev;
}
