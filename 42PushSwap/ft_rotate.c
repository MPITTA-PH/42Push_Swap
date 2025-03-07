/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:14:17 by miguelhenri       #+#    #+#             */
/*   Updated: 2025/02/27 17:47:45 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_elem *stack, char *msg)
{
	int	start;
	int	end;
	int	temp;
	int	temp2;
	int	i;

	start = 0;
	while ((stack[start].index != -1) && (stack[start].set != 1))
		start++;
	end = 0;
	while (stack[end].index != -1)
		end++;
	end--;
	i = end;
	temp = stack[i].num;
	while (i > start)
	{
		temp2 = stack[(i - 1)].num;
		stack[(i - 1)].num = temp;
		temp = temp2;
		i--;
	}
	stack[end].num = temp;
	ft_putstr_fd(msg, 1);
}

void	ft_rev_rotate(t_elem *stack, char *msg)
{
	int	start;
	int	end;
	int	temp;
	int	temp2;
	int	i;

	start = 0;
	while ((stack[start].index != -1) && (stack[start].set != 1))
		start++;
	end = 0;
	while (stack[end].index != -1)
		end++;
	end--;
	i = start;
	temp = stack[i].num;
	while (i < end)
	{
		temp2 = stack[(i + 1)].num;
		stack[(i + 1)].num = temp;
		temp = temp2;
		i++;
	}
	stack[start].num = temp;
	ft_putstr_fd(msg, 1);
}

int	ft_rotate_top(t_elem *stack, int index, char *r, char *rr)
{
	int	op;
	int	n_op;
	int	signal;

	n_op = ft_getontop_ops(stack, index, 1);
	signal = n_op;
	if (n_op < 0)
		n_op = -n_op;
	op = n_op;
	if (n_op != 0)
	{
		while (n_op > 0)
		{
			if (signal > 0)
				ft_rotate(stack, r);
			else
				ft_rev_rotate(stack, rr);
			n_op--;
		}
	}
	if (signal > 0)
		signal = 1;
	else
		signal = -1;
	return (op * signal);
}

void	ft_rotate_both(t_elem *stack_a, t_elem *stack_b, int order)
{
	if (order == 0)
	{
		ft_rotate(stack_a, "");
		ft_rotate(stack_b, "");
		ft_putstr_fd("rr\n", 1);
	}
	else
	{
		ft_rev_rotate(stack_a, "");
		ft_rev_rotate(stack_b, "");
		ft_putstr_fd("rrr\n", 1);
	}
}
