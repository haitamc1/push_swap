/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_position.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:31:38 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 00:32:55 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	index_largest_elm_in_a(t_list *a, int stack_size)
{
	int	index_max;
	int	max;
	int	i;

	i = -1;
	max = a->value;
	index_max = a->position;
	while (++i < stack_size)
	{
		if (a->value > max)
		{
			max = a->value;
			index_max = a->position;
		}
		a = a->next;
	}
	if (index_max >= 0)
		return (index_max);
	else
		return (index_max + 1);
}

int	is_largest_elm(t_list *a, int value)
{
	t_list	*iter;

	iter = a;
	while (iter)
	{
		if (value < iter->value)
			return (0);
		iter = iter->next;
	}
	return (1);
}

// position_in_a : where value should be placed in stack A

int	positions_in_a(t_list *a, int len_a, int value)
{
	t_list	*iter;
	int		i;

	i = -1;
	iter = a;
	if (is_largest_elm(a, value))
		return (index_largest_elm_in_a(a, len_a));
	while (++i < len_a)
	{
		if (a->next && value > a->value && value < a->next->value)
		{
			if (a->position < 0)
				return (a->position + 1);
			return (a->position);
		}
		a = a->next;
	}
	return (0);
}

// position_in_b : how many moves for each element in stack B to get to the top

int	*positions_in_b(int *p, int size)
{
	int	i;

	i = -1;
	while (++i <= size / 2)
		p[i] = i;
	while (i < size)
	{
		p[i] = (size - i) * -1;
		i++;
	}
	return (p);
}
