/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_maxing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:04:36 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 03:53:55 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// ft_abs = absolute value of a

int	ft_abs(int a)
{
	if (a >= 0)
		return (a);
	return (-1 * a);
}

int	max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}

int	min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}

int	index_of_best_elm(int *moves, int len)
{
	int	index_min;
	int	i;

	i = 1;
	index_min = 0;
	while (i < len)
	{
		if (moves[i] < moves[index_min])
			index_min = i;
		i++;
	}
	return (index_min);
}

// num_moves : the number of moves each elemment in stack B 
// need to get sorted in A

// best elm represent the element that requires the least number 
// of moves to get sorted in place

int	num_moves(int **tb, int tb_len)
{
	int	*n_moves;
	int	best_elm;
	int	i;

	i = 0;
	n_moves = malloc (sizeof (int ) * tb_len);
	if (!n_moves)
		exit (0);
	while (i < tb_len)
	{
		if (tb[0][i] >= 0 && tb[1][i] >= 0)
			n_moves[i] = (max(tb[0][i], tb[1][i]));
		else if (tb[0][i] < 0 && tb[1][i] < 0)
			n_moves[i] = ft_abs(min(tb[0][i], tb[1][i]));
		else
			n_moves[i] = ft_abs(tb[0][i]) + ft_abs(tb[1][i]);
		i++;
	}
	best_elm = index_of_best_elm(n_moves, tb_len);
	free (n_moves);
	return (best_elm);
}
