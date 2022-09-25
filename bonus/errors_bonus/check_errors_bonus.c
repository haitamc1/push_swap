/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:51:51 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 02:13:06 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	check_errors(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[i] != NULL)
	{
		is_num(av[i]);
		i++;
	}
	i = 0;
	while (av[i] != NULL)
		check_range(av[i++]);
	check_duplicates(ac, av);
}

void	is_num(char *av)
{
	int	i;

	i = 0;
	if (!av[i])
		error();
	if ((av[i] == '+' || av[i] == '-')
		&& (av[i + 1] >= '0' && av[i + 1] <= '9'))
			i++;
	while (av[i])
	{
		if (av[i] < '0' || av[i] > '9')
			error();
		i++;
	}
}

int	check_range(const char *str)
{
	int		i;
	long	r;
	int		s;

	r = 0;
	s = 1;
	i = 0;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r *= 10;
		r += str[i] - '0';
		i++;
	}
	r *= s;
	if (r > 2147483647 || r < -2147483648)
		error();
	return (r);
}

void	check_duplicates(int ac, char **av)
{
	int	i;
	int	j;
	int	*t;

	i = 0;
	j = 0;
	t = (int *)malloc(sizeof (int) * (ac));
	if (!t)
		exit (0);
	while (av[i])
		t[j++] = ft_atoi(av[i++]);
	i = -1;
	while (++i < ac)
	{
		j = i;
		while (++j < ac)
		{
			if (t[i] == t[j])
			{
				free(t);
				error();
			}
		}
	}
	free(t);
}
