/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:44:48 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 03:26:24 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_begin(int ac, char **av, t_list **a, t_list **b)
{
	int		len_a;

	if (ac == 2)
		return ;
	init_value (a, av);
	if (is_sorted(*a))
	{
		free_list(*a);
		return ;
	}
	len_a = ft_lstsize(*a);
	if (len_a < 6)
	{
		if (len_a < 4)
			sort_three(a);
		else
			sort_five(a, b);
		free_list(*a);
		exit (1);
	}
	lis(a, b);
	empty_b(a, b);
	small_to_top(a);
	free_list(*a);
}

int	main(int ac, char **av)
{
	char	**agv;
	char	**tmp;
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (0);
	empty_string(ac, av);
	just_spaces(av);
	agv = join_args(av);
	ac = column_count(agv);
	check_errors(ac, agv);
	sorting_begin(ac, agv, &a, &b);
	tmp = agv;
	while (*agv)
		free(*agv++);
	free(tmp);
}
