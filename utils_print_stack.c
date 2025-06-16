/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_print_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:45:16 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 14:31:16 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *list, char stack_name)
{
	set_to_head(&list);
	ft_printf("\n");
	while (list)
	{
		ft_printf("stack_%c = %d\n", stack_name, list->content);
		list = list->next;
	}
	ft_printf("\n");
}
