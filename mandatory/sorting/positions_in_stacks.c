/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions_in_stacks.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:58:35 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 01:55:29 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// len_b is also the lenght of of tb

void	get_stack_a_positions(t_list *a, t_list *b, int *tb, int len_a)
{
	int	len_b;
	int	i;

	i = -1;
	len_b = ft_lstsize(b);
	while (++i < len_b)
	{
		tb[i] = positions_in_a(a, len_a, b->value);
		b = b->next;
	}
}

int	**elm_positions_in_stacks(t_list **a, t_list **b)
{
	t_list	*iter;
	int		**tb;
	int		len_a;
	int		len_b;

	tb = NULL;
	iter = *b;
	len_a = ft_lstsize(*a);
	len_b = ft_lstsize(*b);
	tb = alloc(tb, len_b);
	tb[0] = positions_in_b(tb[0], len_b);
	initialize_position(a);
	get_stack_a_positions(*a, *b, tb[1], len_a);
	return (tb);
}
