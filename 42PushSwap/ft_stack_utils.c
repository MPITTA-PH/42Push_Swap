/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:24:30 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/02/27 17:54:37 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_stack_start(t_elem *stack);
int		ft_stack_end(t_elem *stack);
t_elem	ft_stack_min(t_elem *stack);
t_elem	ft_stack_max(t_elem *stack, int limit);

int	ft_is_sorted(t_elem *stack)
{
	int		i;

	if (!stack)
		return (-1);
	i = 0;
	while (stack[(i + 1)].index != -1)
	{
		if (stack[i].num > stack[(i + 1)].num)
			return (-1);
		i++;
	}
	return (1);
}

int	ft_stack_start(t_elem *stack)
{
	int		start;

	if (!stack)
		return (-1);
	start = 0;
	while (stack[start].set != 1)
		start++;
	if (stack[start].index == -1)
		start--;
	return (start);
}

int	ft_stack_end(t_elem *stack)
{
	int		end;

	if (!stack)
		return (-1);
	end = 0;
	while (stack[end].index != -1)
		end++;
	end--;
	return (end);
}

t_elem	ft_stack_min(t_elem *stack)
{
	int	start;
	int	end;
	int	index_min;

	start = ft_stack_start(stack);
	end = ft_stack_end(stack);
	index_min = stack[start].index;
	while (start <= end)
	{
		if (stack[start].num < stack[index_min].num)
			index_min = stack[start].index;
		start++;
	}
	return (stack[index_min]);
}

t_elem	ft_stack_max(t_elem *stack, int limit)
{
	int	start;
	int	end;
	int	index_max;

	start = ft_stack_start(stack);
	end = ft_stack_end(stack);
	index_max = -1;
	while (start <= end)
	{
		if ((index_max == -1) || (((stack[start].num > stack[index_max].num) \
			|| (((limit == -1) || (stack[start].num < limit)) \
			&& (stack[index_max].set == -1)))))
			index_max = stack[start].index;
		start++;
	}
	return (stack[index_max]);
}
