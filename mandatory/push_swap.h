/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchahid <hchahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:31:43 by hchahid           #+#    #+#             */
/*   Updated: 2022/08/19 02:01:49 by hchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdio.h>
# include<unistd.h>
# include<stdlib.h>
# include<stdbool.h>

typedef struct s_list
{
	int				value;
	int				position;
	bool			part_of_lis;
	struct s_list	*next;

}	t_list;

/**************************************************
---------------- STACK MANAGEMENT -----------------
***************************************************/

void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int value);
int		ft_lstsize(t_list *lst);
void	free_list(t_list *a);
void	init_value(t_list **a, char **av);
void	initialize_position(t_list **a);
void	sorting_begin(int ac, char **av, t_list **a, t_list **b);

/**************************************************/

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

char	**join_args(char **av);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char const *str, char c);
void	str(char *s);
char	**ft_split(char const *str, char c);
char	**join_it(char **av);
int		column_count(char **av);
int		is_sorted(t_list *a);

/*****************************************/

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

/***********************************************************************
------------------------------- SORTING --------------------------------
***********************************************************************/

int		index_max(t_list	**a);
int		is_sorted(t_list *a);
void	sort_two(t_list **a);
void	sort_three(t_list **a);
void	sort_five(t_list **a, t_list **b);

void	small_to_top(t_list **a);

/*************************firt_wave****************************/

void	lis(t_list **a, t_list **b);

int		*fill_table(int *p, t_list *a);
int		**alloc(int **tb, int tb_size);
int		index_of_smallest(int **p, int p_size);
int		*offseting_smallest_to_first_index(int *tb, int index, int tb_size);
int		calculate_lis(int **p, int p_len);
int		*define_lis_elements(int **p, int len_p, int len_lis);
void	pb_elm_not_in_lis(t_list **a, t_list **b, int len_lis);
int		rra_or_ra(t_list **a, int stack_size);
void	pb_with_rra(t_list **a, t_list **b, int len_lis);
void	pb_with_ra(t_list **a, t_list **b, int len_lis);
void	mark_lis_elm(t_list **a, int *lis, int lis_size);
int		in_lis(int *lis, int lis_size, int value);

/*--------------------------------------------------------------*/

/*************************treatement****************************/

int		**elm_positions_in_stacks(t_list **a, t_list **b);

int		*positions_in_b(int *p, int size);
int		positions_in_a(t_list *a, int len_a, int value);
void	get_stack_a_positions(t_list *a, t_list *b, int *tb, int len_a);
void	empty_b(t_list **a, t_list **b);
int		**elm_positions_in_stacks(t_list **a, t_list **b);
void	pb_elm_not_in_lis(t_list **a, t_list **b, int len_lis);
int		rra_or_ra(t_list **a, int stack_size);
void	pb_with_rra(t_list **a, t_list **b, int len_lis);
void	pb_with_ra(t_list **a, t_list **b, int len_lis);
void	pos_moves(t_list **a, t_list **b, int **tb, int index);
void	neg_moves(t_list **a, t_list **b, int **tb, int index);
void	mixed_moves(t_list **a, t_list **b, int **tb, int index);
int		num_moves(int **tb, int tb_len);
void	pos_moves(t_list **a, t_list **b, int **tb, int index);
void	neg_moves(t_list **a, t_list **b, int **tb, int index);
void	mixed_moves(t_list **a, t_list **b, int **tb, int index);

/*************************the_end****************************/

void	min_a_to_top(t_list **a);

/*--------------------------------------------------------------*/

#endif
