/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:48:57 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/03/05 19:25:08 by miguelhenri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_elem
{
	int		num;
	int		index;
	int		set;
}	t_elem;

//==============================================================//
//							*CREATE STACKS*						//
//==============================================================//
t_elem	*ft_new_stack(int ac, char **av, int option);

//==============================================================//
//							*FIND ERRORS*						//
//==============================================================//
int		ft_find_errors(int ac, char **av);

//==============================================================//
//							*OPERATIONS*						//
//==============================================================//
void	ft_swap_elements(t_elem *stack, char *msg);
void	ft_push_elem(t_elem *stack_a, t_elem *stack_b, char *msg);

//==============================================================//
//							*GET MEDIAN*						//
//==============================================================//
int		ft_get_median(t_elem *stack);
t_elem	ft_min_above_limit(t_elem *stack, int limit);

//==============================================================//
//							*ORDER STACKS*						//
//==============================================================//
int		ft_check_order(t_elem *stack_a, t_elem *stack_b, int idx);
void	ft_order(t_elem *stack_a, t_elem *stack_b, int idx);
int		ft_getontop_ops(t_elem *stack, int idx, int signal);

//==============================================================//
//							*ROTATE*							//
//==============================================================//
void	ft_rotate(t_elem *stack, char *msg);
void	ft_rev_rotate(t_elem *stack, char *msg);
int		ft_rotate_top(t_elem *stack, int index, char *r, char *rr);
void	ft_rotate_both(t_elem *stack_a, t_elem *stack_b, int order);

//==============================================================//
//							*SORT STACK*						//
//==============================================================//
void	ft_sort_stack(t_elem *stack_a, t_elem *stack_b, int stack_len);
void	ft_sort_three(t_elem *stack);

//==============================================================//
//							*STACK UTILS*						//
//==============================================================//
int		ft_is_sorted(t_elem *stack);
int		ft_stack_start(t_elem *stack);
int		ft_stack_end(t_elem *stack);
t_elem	ft_stack_min(t_elem *stack);
t_elem	ft_stack_max(t_elem *stack, int limit);

#endif