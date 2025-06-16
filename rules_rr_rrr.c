/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rr_rrr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:19:37 by pdessant          #+#    #+#             */
/*   Updated: 2025/05/03 17:19:56 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack **a, t_stack **b)
{
	rotate(a, 'x');
	rotate(b, 'z');
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_r(a, 'x');
	reverse_r(b, 'z');
}
