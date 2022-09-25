/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traveling_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:02:08 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 01:57:05 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb_with_ra(t_list **a, t_list **b, int len_lis)
{
	while (ft_lstsize(*a) > len_lis)
	{
		if (!(*a)->part_of_lis)
			pb(a, b);
		else
		{
			r_stack(a);
			str("ra\n");
		}
	}
}

void	pb_with_rra(t_list **a, t_list **b, int len_lis)
{
	while (ft_lstsize(*a) > len_lis)
	{
		if (!(*a)->part_of_lis)
			pb(a, b);
		else
		{
			rr_stack(a);
			str("rra\n");
		}
	}
}

int	rra_or_ra(t_list **a, int stack_size)
{
	t_list	*iter;
	int		rra;
	int		ra;
	int		i;

	i = 1;
	ra = 0;
	rra = 0;
	iter = *a;
	while (i < stack_size / 2)
	{
		if (!iter->part_of_lis)
			ra++;
		i++;
		iter = iter->next;
	}
	while (iter)
	{
		if (!iter->part_of_lis)
			rra++;
		iter = iter->next;
	}
	if (ra >= rra)
		return (1);
	return (0);
}

void	pb_elm_not_in_lis(t_list **a, t_list **b, int len_lis)
{
	if (rra_or_ra(a, ft_lstsize(*a)))
		pb_with_ra(a, b, len_lis);
	else
		pb_with_rra(a, b, len_lis);
}
