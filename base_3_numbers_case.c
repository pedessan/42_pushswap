/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_3_numbers_case.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:20:30 by pedessan          #+#    #+#             */
/*   Updated: 2025/05/03 18:11:00 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*case_1(t_stack *list, char stack_name)
{
	if ((list)->content < (list)->next->content
		&& (list)->content < (list)->next->next->content
		&& (list)->next->content > (list)->next->next->content)
	{
		reverse_r(&list, stack_name);
		swap(&list, stack_name);
	}
	return (list);
}

t_stack	*case_2(t_stack *list, char stack_name)
{
	if ((list)->content > (list)->next->content
		&& (list)->content < (list)->next->next->content
		&& (list)->next->content < (list)->next->next->content)
	{
		swap(&list, stack_name);
	}
	return (list);
}

t_stack	*case_3(t_stack *list, char stack_name)
{
	if ((list)->content < (list)->next->content
		&& (list)->content > (list)->next->next->content
		&& (list)->next->content > (list)->next->next->content)
	{
		reverse_r(&list, stack_name);
	}
	return (list);
}

t_stack	*case_4(t_stack *list, char stack_name)
{
	if ((list)->content > (list)->next->content
		&& (list)->content > (list)->next->next->content
		&& (list)->next->content < (list)->next->next->content)
	{
		rotate(&list, stack_name);
	}
	return (list);
}

t_stack	*case_5(t_stack *list, char stack_name)
{
	if (((list)->content > (list)->next->content
			&& (list)->content > (list)->next->next->content
			&& (list)->next->content > (list)->next->next->content))
	{
		swap(&list, stack_name);
		reverse_r(&list, stack_name);
	}
	return (list);
}
