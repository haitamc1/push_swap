/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:49:10 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/17 11:51:46 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!*a)
		return ;
	tmp = (*a)->next;
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

	if (!*b)
		return ;
	tmp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = tmp;
}
