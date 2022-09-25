/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:16:19 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 01:48:40 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "get_next_line/get_next_line.h"

typedef struct s_list
{
	int				value;
	int				position;
	struct s_list	*next;

}	t_list;

/*******************************************
------------- ERROR MANAGEMENT -------------
********************************************/

void	error(void);
void	is_num(char *av);
void	check_errors(int ac, char **av);
int		check_range(const char *str);
void	check_duplicates(int ac, char **av);
void	just_spaces(char **av);
void	empty_string(int ac, char **av);

/*******************************************/

/****************************************
----------------- UTILS -----------------
*****************************************/

int		ft_atoi(const char *str);
void	show_elm(t_list *a);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char const *str, char c);
void	str(char *s);
char	**ft_split(char const *str, char c);
char	**join_args(char **av);
int		column_count(char **av);
int		is_sorted(t_list *a);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*****************************************/

/**************************************************
---------------- STACK MANAGEMENT -----------------
***************************************************/

void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int value);
int		ft_lstsize(t_list *lst);

void	destroy_list(t_list	*a);

void	init_value(t_list **a, char **av);
void	initialize_position(t_list **a);

/**************************************************/

/*********************************
---------- OPERATIONS ------------
**********************************/

void	pb(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);

void	r_stack(t_list **stack);
void	rr_stack(t_list **stack);

void	rr(t_list **a, t_list **b);
void	rrr(t_list **a, t_list **b);

void	s_stack(t_list **stack);
void	ss(t_list **a, t_list **b);

/***********************************/

#endif
