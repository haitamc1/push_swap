/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:22:57 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 01:51:01 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	empty_b(t_list **a, t_list **b)
{
	int	**tb;
	int	len_a;
	int	index;

	tb = NULL;
	len_a = ft_lstsize(*a);
	while (ft_lstsize(*b))
	{
		tb = elm_positions_in_stacks(a, b);
		index = num_moves(tb, ft_lstsize(*b));
		if (tb[0][index] >= 0 && tb[1][index] >= 0)
			pos_moves(a, b, tb, index);
		else if (tb[0][index] < 0 && tb[1][index] < 0)
			neg_moves(a, b, tb, index);
		else
			mixed_moves(a, b, tb, index);
		free(tb[0]);
		free(tb[1]);
		free(tb);
	}
}
