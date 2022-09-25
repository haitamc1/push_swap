/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubles_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:48:58 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/17 11:49:00 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	ss(t_list **a, t_list **b)
{
	s_stack(a);
	s_stack(b);
}

void	rr(t_list **a, t_list **b)
{
	r_stack(a);
	r_stack(b);
}

void	rrr(t_list **a, t_list **b)
{
	rr_stack(a);
	rr_stack(b);
}
