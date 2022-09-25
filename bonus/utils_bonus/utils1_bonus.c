/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:44:24 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/17 12:13:00 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (1);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

char	**join_args(char **av)
{
	char	**arg;
	char	*str;
	int		i;

	i = 1;
	str = NULL;
	while (av[i])
	{
		str = ft_strjoin(str, av[i++]);
		str = ft_strjoin(str, " ");
	}
	arg = ft_split(str, ' ');
	free(str);
	return (arg);
}
