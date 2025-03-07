/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:30:36 by miguelhenri       #+#    #+#             */
/*   Updated: 2025/02/27 17:57:19 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_elem *stack)
{
	int	start;
	int	end;

	start = ft_stack_start(stack);
	end = ft_stack_end(stack);
	if ((ft_stack_min(stack).index == start)
		&& (ft_stack_max(stack, -1).index == end))
		return ;
	if ((ft_stack_min(stack).index == start)
		&& (ft_stack_max(stack, -1).index == (end - 1)))
	{
		ft_swap_elements(stack, "sa\n");
		ft_rotate(stack, "ra\n");
	}
	if (ft_stack_max(stack, -1).index == start)
		ft_rotate(stack, "ra\n");
	if (stack[start].num > stack[(start + 1)].num)
		ft_swap_elements(stack, "sa\n");
	if (ft_stack_min(stack).index == end)
		ft_rev_rotate(stack, "rra\n");
}
