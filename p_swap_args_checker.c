/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_args_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:45:47 by rockyd            #+#    #+#             */
/*   Updated: 2025/05/03 16:19:06 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	args_checker(char **av, long **ar, int *len)
{
	int	check;

	check = check_chars(2, av);
	if (check == 0)
		check = get_numbers(2, av, ar, len);
	return (check);
}

/* 
int	args_checker(char **av, long **ar, int *len)
{
	//int	i;

	//i = 1;
	int	check;
	//ft_printf("hey 3 tu?\n");
	//ft_printf(RED "DEBUG: av[1] = %s\n" RESET, av[1]);
	//if (check_chars(2, av) == 1)
	//	return (1);
	check = check_chars(2, av);
 	//while (av[i])
	//{
	//	if (check_chars(av[i]) == 1)
	//	{
	//		ft_printf ("Error\n");
	//		return (1);
	//	}
	//	i++;
	//}
	//ft_printf("hey 5 tu?\n");
	check = get_numbers(2, av, ar, len);
	return (check);
} */
