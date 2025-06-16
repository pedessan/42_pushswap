/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:53:34 by rockyd            #+#    #+#             */
/*   Updated: 2025/05/03 17:18:07 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack **a)
{
	t_stack		*b;
	t_extremes	*ex;

	b = NULL;
	ex = malloc(sizeof(t_extremes));
	if (!ex)
		return ;
	ex->min = find_min(*a);
	ex->max = find_max(*a);
	sort_a_to_b(a, &b, ex);
	free (ex);
	free_list(a);
}

void	all_cases(t_stack **a)
{
	int		n;

	n = p_swap_lstsize(*a);
	if (n == 1)
		return ;
	else if (n == 2)
		swap(a, 'a');
	else if (n == 3)
	{
		triad_case(a, 'a');
		free_list(a);
	}
	else if (n == 5)
		five_nums(a);
	else
		push_swap(a);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	long	*ar;
	int		len;

	a = (t_stack *){0};
	ar = NULL;
	if (ac > 1)
	{
		if (parsing_values(ac, av, &ar, &len) == 0)
		{
			a = create_stack_a(ar, len);
			if (a && (check_if_stack_is_sorted(a) == 0))
				all_cases(&a);
			else if (check_if_stack_is_sorted(a) == 1)
				free_list(&a);
		}
		else
		{
			ft_printf ("Error\n");
			if (ar)
				free(ar);
		}
	}
	return (0);
}
