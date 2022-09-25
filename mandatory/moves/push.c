/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:49:10 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 03:52:55 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a)->next;
	str("pb\n");
	if (!*b)
	{
		*b = *a;
		*a = (*a)->next;
		(*b)->next = NULL;
		return ;
	}
	if (tmp)
	{
		(*a)->next = (*b);
		*b = *a;
	}
	*a = tmp;
}

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = tmp;
	str("pa\n");
}
