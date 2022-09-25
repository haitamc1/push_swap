/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:37:11 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/17 21:01:35 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	index_of_smallest(int **p, int p_size)
{
	int	i;
	int	min_i;

	i = 1;
	min_i = 0;
	while (i < p_size)
	{
		if (p[0][i] < p[0][min_i])
			min_i = i;
		i++;
	}
	return (min_i);
}

int	**alloc(int **tb, int tb_size)
{
	tb = malloc(sizeof(int *) * 2);
	if (!tb)
		exit(0);
	tb[0] = malloc(sizeof(int ) * (tb_size));
	if (!tb[0])
		exit(0);
	tb[1] = malloc(sizeof(int ) * (tb_size));
	if (!tb[1])
		exit(0);
	return (tb);
}

int	*fill_table(int *p, t_list *a)
{
	t_list	*iter;
	int		i;

	i = 0;
	iter = a;
	while (iter)
	{
		p[i++] = iter->value;
		iter = iter->next;
	}
	return (p);
}

int	*offseting_smallest_to_first_index(int *tb, int index, int tb_size)
{
	int	*new_tb;
	int	i;
	int	j;

	new_tb = malloc(sizeof(int ) * tb_size);
	if (!new_tb)
		exit (0);
	i = 0;
	j = index;
	while (j < tb_size)
		new_tb[i++] = tb[j++];
	j = 0;
	while (j < index)
		new_tb[i++] = tb[j++];
	free(tb);
	return (new_tb);
}
