/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:44:55 by miguelhenri       #+#    #+#             */
/*   Updated: 2025/02/27 17:49:20 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_is_median(t_elem *stack, int num);

int	ft_get_median(t_elem *stack)
{
	int	start;
	int	end;

	start = ft_stack_start(stack);
	end = ft_stack_end(stack);
	while (start <= end)
	{
		if (ft_is_median(stack, stack[start].num))
			return (stack[start].num);
		start++;
	}
	return (-1);
}

static int	ft_is_median(t_elem *stack, int num)
{
	int	start;
	int	end;
	int	max;
	int	min;
	int	diff;

	start = ft_stack_start(stack);
	end = ft_stack_end(stack);
	min = 0;
	max = 0;
	while (start <= end)
	{
		if (stack[start].num > num)
			max++;
		else if (stack[start].num < num)
			min++;
		start++;
	}
	diff = (max - min);
	if ((diff >= -1) && (diff <= 1))
		return (1);
	return (0);
}

t_elem	ft_min_above_limit(t_elem *stack, int limit)
{
	int	start;
	int	end;
	int	min_index;

	start = ft_stack_start(stack);
	end = ft_stack_end(stack);
	min_index = -1;
	while (start <= end)
	{
		if ((stack[start].num > limit) && ((min_index == -1)
				|| (stack[start].num < stack[min_index].num)))
			min_index = stack[start].index;
		start++;
	}
	if (min_index == -1)
		return (ft_stack_min(stack));
	return (stack[min_index]);
}
