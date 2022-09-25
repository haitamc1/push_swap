/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_lis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:29:29 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 01:58:25 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	lis(t_list **a, t_list **b)
{
	int	stack_size;
	int	lis_size;
	int	**p;
	int	i;

	i = 0;
	p = NULL;
	stack_size = ft_lstsize(*a);
	p = alloc(p, stack_size);
	while (i < stack_size)
		p[1][i++] = 1;
	p[0] = fill_table(p[0], *a);
	p[0] = offseting_smallest_to_first_index(p[0],
			index_of_smallest(p, stack_size), stack_size);
	lis_size = calculate_lis(p, stack_size);
	p[0] = define_lis_elements(p, stack_size, lis_size);
	mark_lis_elm(a, p[0], lis_size);
	pb_elm_not_in_lis(a, b, lis_size);
	free(p[0]);
	free(p);
}

// define the lis in stack and return it's size

int	calculate_lis(int **p, int p_len)
{
	int	max;
	int	i;
	int	j;

	i = 1;
	while (i < p_len)
	{
		j = 0;
		while (j < i)
		{
			if (p[0][i] > p[0][j] && (p[1][j] + 1) > p[1][i])
				p[1][i] += 1;
			j++;
		}
		i++;
	}
	i = 0;
	max = p[1][0];
	while (++i < p_len)
	{
		if (p[1][i] > max)
			max = p[1][i];
	}
	return (max);
}
