/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:25:48 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/17 12:24:39 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

char	*ft_substr(char *s, int start, int len);
int		ft_strlen(char *s);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
char	*get_next_line(int fd);
int		boucle(int fd, int *rd, char *buff, char **s);
char	*line(char *s);
char	*new_s(char *s);
int		len_n(char *s);

#endif
