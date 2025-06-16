/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rotate_reverse_r.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:21:02 by pdessant          #+#    #+#             */
/*   Updated: 2025/05/03 17:21:19 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **s, char stack_name)
{
	t_stack	*first;
	t_stack	*last;

	set_to_head(s);
	if (!s || !(*s) || !(*s)->next)
		return ;
	first = *s;
	last = *s;
	while (last->next)
		last = last->next;
	*s = first->next;
	(*s)->prev = NULL;
	last->next = first;
	first->prev = last;
	first->next = NULL;
	if (stack_name == 'a' || stack_name == 'b')
		ft_printf("r%c\n", stack_name);
	else if (stack_name == 'x')
		ft_printf("rr\n", stack_name);
}

void	reverse_r(t_stack **list, char stack_name)
{
	t_stack	*second_last;
	t_stack	*last;

	set_to_head(list);
	if (!list || !(*list) || !(*list)->next)
		return ;
	second_last = *list;
	while (second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *list;
	last->prev = NULL;
	(*list)->prev = last;
	*list = last;
	if (stack_name == 'a' || stack_name == 'b')
		ft_printf("rr%c\n", stack_name);
	else if (stack_name == 'x')
		ft_printf("rrr\n");
}
