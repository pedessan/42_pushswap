/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_parsing_values.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:57:18 by pdessant          #+#    #+#             */
/*   Updated: 2025/04/04 16:41:19 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_ar(int size, long *num)
{
	int	i;

	i = 0;
	ft_printf("\n");
	while (i < size)
	{
		ft_printf("%d\n", num[i]);
		i++;
	}
	ft_printf("\n");
}

int	parsing_values(int ac, char **av, long **ar, int *len)
{
	int	check;

	check = 0;
	if (ac == 2)
		check = check_the_only_arg(ac, av[1], ar, len);
	else if (ac > 2)
		check = args_checker(av, ar, len);
	return (check);
}

/* int	main(int ac, char **av)
{
	//t_stack	*a;
	long		*ar;
	int		len;
	//int		check;
	//int		n;

	if (ac > 1)
	{
		if (parsing_values(ac, av, &ar, &len) == 0)
		{
			ft_printf("FUNZIONA!!\n");
			print_ar(len, ar);
		}
	}
	return (0);
} */
