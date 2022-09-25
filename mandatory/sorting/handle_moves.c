/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:28:07 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 03:53:41 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pos_moves(t_list **a, t_list **b, int **tb, int index)
{
	while (tb[0][index] > 0 && tb[1][index] > 0)
	{
		rr(a, b);
		tb[0][index] += -1;
		tb[1][index] += -1;
		str("rr\n");
	}
	while (tb[1][index] > 0)
	{
		r_stack(a);
		tb[1][index] += -1;
		str("ra\n");
	}
	while (tb[0][index] > 0)
	{
		r_stack(b);
		tb[0][index] += -1;
		str("rb\n");
	}
	pa(a, b);
}

void	neg_moves(t_list **a, t_list **b, int **tb, int index)
{
	while (tb[0][index] < 0 && tb[1][index] < 0)
	{
		rrr(a, b);
		tb[0][index] += 1;
		tb[1][index] += 1;
		str("rrr\n");
	}
	while (tb[1][index] < 0)
	{
		rr_stack(a);
		tb[1][index] += 1;
		str("rra\n");
	}
	while (tb[0][index] < 0)
	{
		rr_stack(b);
		tb[0][index] += 1;
		str("rrb\n");
	}
	pa(a, b);
}

void	roll_b(t_list **b, int **tb, int index)
{
	if (tb[0][index] > 0)
	{
		while (tb[0][index] > 0)
		{
			r_stack(b);
			tb[0][index] += -1;
			str("rb\n");
		}
	}
	else
	{
		while (tb[0][index] < 0)
		{
			rr_stack(b);
			tb[0][index] += 1;
			str("rrb\n");
		}
	}
}

void	roll_a(t_list **a, int **tb, int index)
{
	if (tb[1][index] > 0)
	{
		while (tb[1][index] > 0)
		{
			r_stack(a);
			tb[1][index] += -1;
			str("ra\n");
		}
	}
	else
	{
		while (tb[1][index] < 0)
		{
			rr_stack(a);
			tb[1][index] += 1;
			str("rra\n");
		}
	}
}

void	mixed_moves(t_list **a, t_list **b, int **tb, int index)
{
	roll_b(b, tb, index);
	roll_a(a, tb, index);
	pa(a, b);
}
