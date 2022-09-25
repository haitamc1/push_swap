/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finishing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:35:52 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 01:52:22 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	min_elm_in_a(t_list *a, int len_a)
{
	int	index_min;
	int	min;
	int	i;

	i = -1;
	index_min = a->position;
	min = a->value;
	while (++i < len_a)
	{
		if (a->value < min)
		{
			min = a->value;
			index_min = a->position;
		}
		a = a->next;
	}
	return (index_min);
}

void	min_a_to_top(t_list **a)
{
	int	min_elm;

	min_elm = min_elm_in_a(*a, ft_lstsize(*a));
	while (min_elm > 1)
	{
		r_stack(a);
		write(1, "ra\n", 3);
		min_elm--;
	}
	while (min_elm < 0)
	{
		rr_stack(a);
		write(1, "rra\n", 4);
		min_elm++;
	}
}
