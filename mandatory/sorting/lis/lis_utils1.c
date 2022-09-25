/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis_utils1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:44:45 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 01:58:51 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	*define_lis_elements(int **p, int len_p, int len_lis)
{
	int	*lis;
	int	i;

	i = len_p - 1;
	lis = malloc (sizeof (int ) * len_lis);
	if (!lis)
		exit (0);
	while (i >= 0 && len_lis > 0)
	{
		if (p[1][i] == len_lis)
		{
			lis[len_lis - 1] = p[0][i];
			len_lis--;
		}
		i--;
	}
	free(p[0]);
	free(p[1]);
	return (lis);
}

int	in_lis(int *lis, int lis_size, int value)
{
	int	i;

	i = 0;
	while (i < lis_size)
	{
		if (lis[i] == value)
			return (1);
		i++;
	}
	return (0);
}

void	mark_lis_elm(t_list **a, int *lis, int lis_size)
{
	t_list	*iter;

	iter = *a;
	while (iter)
	{
		if (in_lis(lis, lis_size, iter->value))
			iter->part_of_lis = true;
		iter = iter->next;
	}
}
