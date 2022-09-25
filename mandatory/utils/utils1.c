/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:44:24 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 01:10:17 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	str(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write (1, &s[i++], 1);
}

int	space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	r;
	int		s;

	r = 0;
	s = 1;
	i = 0;
	while (space(str[i]))
		i++;
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
	return (r * s);
}
