/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:49:32 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/17 11:55:13 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	s_stack(t_list **stack)
{
	t_list	*p;

	if (!*stack)
		return ;
	p = (*stack)->next;
	if (!p)
		return ;
	(*stack)->next = (*stack)->next->next;
	p->next = *stack;
	*stack = p;
}
