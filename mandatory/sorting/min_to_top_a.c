/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_to_top_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:00:28 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 03:53:46 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	smallest_elm_in_a(t_list *a, int len_a)
{
	int	min_elm;
	int	index_min;
	int	i;

	i = -1;
	min_elm = a->value;
	index_min = a->position;
	while (++i < len_a)
	{
		if (a->value < min_elm)
		{
			min_elm = a->value;
			index_min = a->position;
		}
		a = a->next;
	}
	return (index_min);
}

void	small_to_top(t_list **a)
{
	int	min_elm_index;

	initialize_position(a);
	min_elm_index = smallest_elm_in_a(*a, ft_lstsize(*a));
	while (min_elm_index > 1)
	{
		r_stack(a);
		write(1, "ra\n", 3);
		min_elm_index--;
	}
	while (min_elm_index < 0)
	{
		rr_stack(a);
		write(1, "rra\n", 4);
		min_elm_index++;
	}
}
