/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:51:57 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 01:48:40 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	index_max(t_list	**a)
{
	t_list	*iter;
	int		max_i;
	int		max;
	int		i;

	iter = *a;
	max = iter->value;
	max_i = 1;
	i = 1;
	while (iter)
	{
		if (iter->value > max)
		{
			max = iter->value;
			max_i = i;
		}
		iter = iter->next;
		i++;
	}
	return (max_i);
}

int	is_sorted(t_list *a)
{
	while (a)
	{
		if (a->next && (a->value > (a->next)->value))
			return (0);
		a = a->next;
	}
	return (1);
}

void	sort_two(t_list **a)
{
	if (is_sorted(*a))
		return ;
	s_stack(a);
	str("sa\n");
}

void	sort_three(t_list **a)
{
	int		max_i;

	max_i = index_max(a);
	if (ft_lstsize(*a) == 2)
	{
		sort_two(a);
		return ;
	}
	if (max_i == 1)
	{
		r_stack(a);
		str("ra\n");
	}
	else if (max_i == 2)
	{
		rr_stack(a);
		str("rra\n");
	}
	if (((*a)->next)->value < (*a)->value)
	{
		s_stack(a);
		str("sa\n");
	}
}

void	sort_five(t_list **a, t_list **b)
{
	initialize_position(a);
	if (ft_lstsize(*a) == 5)
	{
		min_a_to_top(a);
		pb(a, b);
		initialize_position(a);
		min_a_to_top(a);
		pb(a, b);
	}
	else
	{
		min_a_to_top(a);
		pb(a, b);
	}
	sort_three(a);
	while (ft_lstsize(*b))
		pa(a, b);
}
