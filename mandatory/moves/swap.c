/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:49:32 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 00:53:50 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s_stack(t_list **stack)
{
	t_list	*p;

	p = (*stack)->next;
	if (!p)
		return ;
	(*stack)->next = (*stack)->next->next;
	p->next = *stack;
	*stack = p;
}
