/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:37:28 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/16 17:39:11 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
