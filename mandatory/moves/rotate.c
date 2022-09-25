/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:49:21 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 00:53:43 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_stack(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	head = *stack;
	tail = ft_lstlast(*stack);
	*stack = (*stack)->next;
	tail->next = head;
	head->next = NULL;
}

void	rr_stack(t_list **stack)
{
	t_list	*head;
	t_list	*tail;
	t_list	*top;
	int		len;
	int		i;

	if (!*stack)
		return ;
	i = 1;
	head = *stack;
	tail = *stack;
	len = ft_lstsize(*stack);
	while (i < len - 1)
	{
		tail = tail->next;
		i++;
	}
	top = ft_lstlast(*stack);
	top->next = head;
	tail->next = NULL;
	*stack = top;
}
