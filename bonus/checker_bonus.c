/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:15:47 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 01:48:40 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	compare(char *move, t_list **a, t_list **b)
{
	if (!ft_strncmp("sa", move, 2))
		s_stack(a);
	else if (!ft_strncmp("sb", move, 3))
		s_stack(b);
	else if (!ft_strncmp("ss", move, 3))
		ss(a, b);
	else if (!ft_strncmp("pa", move, 3))
		pa(a, b);
	else if (!ft_strncmp("pb", move, 3))
		pb(a, b);
	else if (!ft_strncmp("ra", move, 3))
		r_stack(a);
	else if (!ft_strncmp("rb", move, 3))
		r_stack(b);
	else if (!ft_strncmp("rr", move, 3))
		rr(a, b);
	else if (!ft_strncmp("rra", move, 3))
		rr_stack(a);
	else if (!ft_strncmp("rrb", move, 4))
		rr_stack(b);
	else if (!ft_strncmp("rrr", move, 4))
		rrr(a, b);
	else
		error();
}

void	read_it(t_list **a, t_list **b)
{
	char	*line;
	int		len;

	line = get_next_line(0);
	while (line)
	{
		len = ft_strlen(line);
		if (len == 4)
			line[3] = '\0';
		else if (len == 3)
			line[2] = '\0';
		else
			error();
		compare(line, a, b);
		line = get_next_line(0);
	}
	if (is_sorted(*a))
		str("OK\n");
	else
		str("KO\n");
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
	init_value(&a, agv);
	initialize_position(&a);
	read_it(&a, &b);
	tmp = agv;
	while (*agv)
		free(*agv++);
	free(tmp);
}
