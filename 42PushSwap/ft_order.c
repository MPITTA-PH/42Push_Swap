/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:56:09 by miguelhenri       #+#    #+#             */
/*   Updated: 2025/02/27 17:55:22 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_order(t_elem *stack_a, t_elem *stack_b, int idx)
{
	int	n_op_a;
	int	n_op_b;
	int	n_ops;
	int	min;

	n_op_a = ft_getontop_ops(stack_a, idx, 1);
	if ((ft_stack_min(stack_b).num > stack_a[idx].num)
		|| (ft_stack_max(stack_b, -1).num < stack_a[idx].num))
		n_op_b = ft_getontop_ops(stack_b, ft_stack_min(stack_b).index, 1);
	else
	{
		min = ft_min_above_limit(stack_b, stack_a[idx].num).index;
		n_op_b = ft_getontop_ops(stack_b, min, 1);
	}
	n_ops = 0;
	if ((n_op_a > 0) && (n_op_b > 0))
		n_ops = ft_min(n_op_a, n_op_b);
	if ((n_op_a < 0) && (n_op_b < 0))
		n_ops = ft_max(n_op_a, n_op_b);
	return (n_ops);
}

void	ft_order(t_elem *stack_a, t_elem *stack_b, int idx)
{
	int	n_ops;

	n_ops = ft_check_order(stack_a, stack_b, idx);
	if (n_ops > 0)
	{
		while (n_ops > 0)
		{
			ft_rotate_both(stack_a, stack_b, 0);
			n_ops--;
		}
	}
	else if (n_ops < 0)
	{
		n_ops = -n_ops;
		while (n_ops > 0)
		{
			ft_rotate_both(stack_a, stack_b, 1);
			n_ops--;
		}
	}
}

int	ft_getontop_ops(t_elem *stack, int idx, int signal)
{
	int	n_ops;
	int	start;
	int	end;
	int	mid_index;

	n_ops = 0;
	start = ft_stack_start(stack);
	end = ft_stack_end(stack);
	mid_index = (start + ((end - start) / 2));
	if (idx > mid_index)
	{
		n_ops = (end - idx + 1);
		if (signal == 1)
			n_ops = -n_ops;
	}
	else if (idx <= mid_index)
		n_ops = (idx - start);
	return (n_ops);
}
