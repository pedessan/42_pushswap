/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_vals_cmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:16:46 by rockyd            #+#    #+#             */
/*   Updated: 2025/04/04 16:19:51 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ar_dup(long *vals, int size)
{
	long	*dup;
	int		i;

	dup = malloc(sizeof(long) * size);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dup[i] = vals[i];
		i++;
	}
	return (dup);
}

int	vals_cmp(long *vals, int size)
{
	long	*cpy;
	long	tmp;
	int		i;
	int		x;

	cpy = ar_dup(vals, size);
	if (!cpy)
		return (1);
	i = 0;
	while (i < size)
	{
		tmp = vals[i];
		x = i;
		while (++x < size)
		{
			if (cpy[x] == tmp)
				return (free(cpy), 1);
		}
		i++;
	}
	free(cpy);
	return (0);
}

/* 
int	main()
{
	long	vals[] = {1, 2, 3, 4};
	int	size = 4;
	
	print_ar(size, vals);
	//if (vals_cmp(vals, &size) == 0)
	if (vals_cmp(vals, size) == 0)
		ft_printf("DEBUG:  check == 0");
	else
		ft_printf("DEBUG:  check == 1");
	return (0);
} */
