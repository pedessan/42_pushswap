/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_3_main_function.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:07:51 by pdessant          #+#    #+#             */
/*   Updated: 2025/05/03 18:09:29 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	triad_case(t_stack **list, char stack_name)
{
	if (p_swap_lstsize(*list) == 3)
	{
		set_to_head(list);
		*list = case_1(*list, stack_name);
		*list = case_2(*list, stack_name);
		*list = case_3(*list, stack_name);
		*list = case_4(*list, stack_name);
		*list = case_5(*list, stack_name);
	}
}
