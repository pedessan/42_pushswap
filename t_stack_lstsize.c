/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_lstsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:00:42 by pedessan          #+#    #+#             */
/*   Updated: 2025/04/04 16:25:04 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	p_swap_lstsize(t_stack *lst)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = lst;
	set_to_head(&tmp);
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
