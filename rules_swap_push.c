/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_swap_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:26:35 by rockyd            #+#    #+#             */
/*   Updated: 2025/05/03 17:35:14 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **list, char stack_name)
{
	int	tmp;

	set_to_head(list);
	if ((*list)->next)
	{
		tmp = (*list)->content;
		(*list)->content = (*list)->next->content;
		(*list)->next->content = tmp;
		ft_printf("s%c\n", stack_name);
	}
}

void	ss(t_stack **a, t_stack **b)
{
	if ((!a || !(*a) || !(*a)->next) && (!b || !(*b) || !(*b)->next))
		return ;
	swap(a, 'x');
	swap(b, 'x');
	ft_printf("ss\n");
}

void	push(t_stack **main_list, t_stack **where_to_push, char stack_name)
{
	set_to_head(main_list);
	if (!*main_list)
		return ;
	p_swap_lstadd_front(where_to_push, p_swap_lstnew((*main_list)->content));
	delete_head(main_list);
	ft_printf("p%c\n", stack_name);
}
