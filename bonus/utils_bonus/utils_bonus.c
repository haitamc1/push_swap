/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:41:50 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/17 12:19:48 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	column_count(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*c;
	char	*p;

	i = 0;
	p = (char *)s1;
	while (s1[i])
		i++;
	c = malloc((i + 1) * sizeof(char));
	if (!c)
		return (0);
	i = 0;
	while (p[i])
	{
		c[i] = p[i];
		i++;
	}	
	c[i] = '\0';
	return (c);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*r;
	int		i;
	int		j;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (0);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	r = malloc ((i + j + 1) * sizeof(char));
	if (!r)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		r[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		r[i++] = s2[j++];
	r[i] = '\0';
	free(s1);
	return (r);
}

int	is_sorted(t_list *a)
{
	while (a)
	{
		if (a->next && (a->value > (a->next)->value))
			return (0);
		a = a->next;
	}
	return (1);
}
