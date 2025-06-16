/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap_check_the_only_arg.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:39:51 by rockyd            #+#    #+#             */
/*   Updated: 2025/05/03 16:28:11 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	matrix_len(int case_i, char **s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (case_i == 1)
		i = 0;
	else if (case_i == 2)
		i = 1;
	while (s[i + j])
		j++;
	return (j);
}

int	get_numbers(int case_i, char **s, long **ar, int *len)
{
	int	check;
	int	i;
	int	j;

	if (case_i == 2)
		i = 1;
	else
		i = 0;
	j = 0;
	check = 0;
	*len = matrix_len(case_i, s);
	*ar = malloc(sizeof(long) * (*len));
	if (!*ar)
		return (1);
	while (s[i])
	{
		(*ar)[j] = ft_atol(s[i]);
		if ((*ar)[j] < INT_MIN || (*ar)[j] > INT_MAX)
			return (1);
		i++;
		j++;
	}
	check = vals_cmp(*ar, *len);
	return (check);
}

void	free_s_ar(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free (s);
	s = NULL;
}

int	check_the_only_arg(int ac, char *s, long **ar, int *len)
{
	char	**splitted;
	int		check;

	check = 0;
	splitted = ft_charset_split(s);
	if (!splitted)
		return (1);
	if ((ac > 2) && (matrix_len(1, splitted) > 1))
	{
		free_alloc(splitted);
		return (1);
	}
	check = check_chars(1, splitted);
	if (check == 0)
		check = get_numbers(1, splitted, ar, len);
	free_s_ar(splitted);
	return (check);
}
