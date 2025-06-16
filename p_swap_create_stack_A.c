/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_create_stack_A.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:26:17 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 16:43:50 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack_a(long *ar, int len)
{
	t_stack	*a;
	t_stack	*nd;
	int		i;

	a = NULL;
	i = 0;
	while (i < len)
	{
		nd = p_swap_lstnew((int)ar[i]);
		if (!nd)
		{
			ft_printf("Error\n");
			free_list(&a);
			return (NULL);
		}
		p_swap_lstadd_back(&a, nd);
		i++;
	}
	free (ar);
	return (a);
}
