/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:14:01 by miguelhenri       #+#    #+#             */
/*   Updated: 2025/02/27 17:52:36 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_exec_move(t_elem *stack_b,
				t_elem *stack_a, int index, int stack_len);
static int	ft_find_cheap_op(t_elem *stack_a, t_elem *stack_b, int stack_len);
static int	ft_how_many_ops(t_elem *stack_a, t_elem *stack_b, int index);

void	ft_sort_stack(t_elem *stack_a, t_elem *stack_b, int stack_len)
{
	int	pivot;
	int	x;

	x = ft_stack_start(stack_a);
	pivot = ft_get_median(stack_a);
	while (x < (stack_len - 4))
	{
		ft_push_elem(stack_a, stack_b, "pb\n");
		if ((stack_b[ft_stack_start(stack_b)].num > pivot)
			&& ((ft_stack_end(stack_a) - ft_stack_start(stack_a)) + 1) > 3)
			ft_rotate(stack_b, "rb\n");
		x++;
	}
	ft_sort_three(stack_a);
	x = ft_stack_start(stack_b);
	while (x < ft_stack_end(stack_b))
	{
		ft_exec_move(stack_b, stack_a,
			ft_find_cheap_op(stack_b, stack_a, stack_len), stack_len);
		x++;
	}
	ft_rotate_top(stack_a, ft_min_above_limit(stack_a, stack_b[x].num).index, \
	"ra\n", "rra\n");
	ft_push_elem(stack_b, stack_a, "pa\n");
	ft_rotate_top(stack_a, ft_stack_min(stack_a).index, "ra\n", "rra\n");
}

static void	ft_exec_move(t_elem *stack_b,
				t_elem *stack_a, int index, int stack_len)
{
	int	start;
	int	ordered;

	start = ft_stack_start(stack_b);
	ordered = ft_check_order(stack_b, stack_a, index);
	ft_order(stack_b, stack_a, index);
	if (ordered != 0)
		index -= ordered;
	if (index >= (stack_len - 2))
		index = (start + (index - (stack_len - 1)));
	else if (index < start)
		index = (ft_stack_end(stack_b) + index);
	index -= ft_rotate_top(stack_b, index, "rb\n", "rrb\n");
	if (index >= (stack_len - 2))
		index = (start + (index - (stack_len - 1)));
	if ((ft_stack_min(stack_a).num > stack_b[index].num)
		|| (ft_stack_max(stack_a, -1).num < stack_b[index].num))
		ft_rotate_top(stack_a, ft_stack_min(stack_a).index, "ra\n", "rra\n");
	else
		ft_rotate_top(stack_a, ft_min_above_limit(stack_a,
				stack_b[index].num).index, "ra\n", "rra\n");
	ft_push_elem(stack_b, stack_a, "pa\n");
}

static int	ft_find_cheap_op(t_elem	*stack_a, t_elem *stack_b, int stack_len)
{
	int		index;
	int		cost;
	t_elem	min_ops;

	index = ft_stack_start(stack_a);
	min_ops.num = -1;
	while (index < (stack_len - 1))
	{
		cost = ft_how_many_ops(stack_a, stack_b, index);
		if ((cost < min_ops.num) || (min_ops.num == -1))
		{
			min_ops.num = cost;
			min_ops.index = index;
		}
		index++;
	}
	return (min_ops.index);
}

static int	ft_how_many_ops(t_elem *stack_a, t_elem *stack_b, int index)
{
	int		n_op;
	int		order;
	t_elem	min_n_behind;

	n_op = 0;
	n_op += ft_getontop_ops(stack_a, index, 0);
	if ((ft_stack_min(stack_b).num > stack_a[index].num)
		|| (ft_stack_max(stack_b, -1).num < stack_a[index].num))
		n_op += ft_getontop_ops(stack_b, ft_stack_min(stack_b).index, 0);
	else
	{
		min_n_behind = ft_min_above_limit(stack_b, stack_a[index].num);
		n_op += ft_getontop_ops(stack_b, stack_b[min_n_behind.index].index, 0);
	}
	order = ft_check_order(stack_a, stack_b, index);
	if (order < 0)
		order = -order;
	n_op = (n_op - order);
	return (n_op + 1);
}
