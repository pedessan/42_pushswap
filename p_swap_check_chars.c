/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_check_chars.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:01:13 by rockyd            #+#    #+#             */
/*   Updated: 2025/05/03 16:26:01 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_string(char *s)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			if ((sign == 0) && (s[i] == '+' || s[i] == '-'))
				sign++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int	check_chars(int i_case, char **s)
{
	int	i;
	int	check;

	i = 0;
	if (i_case == 1)
		i = 0;
	else if (i_case == 2)
		i = 1;
	check = 0;
	while (s[i])
	{
		check = check_string(s[i]);
		if (check == 1)
			return (check);
		i++;
	}
	return (check);
}
