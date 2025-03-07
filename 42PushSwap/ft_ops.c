/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:45:48 by miguelhenri       #+#    #+#             */
/*   Updated: 2025/02/27 17:56:53 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_elements(t_elem *stack, char *msg)
{
	int	start;
	int	temp;

	start = ft_stack_start(stack);
	temp = stack[start].num;
	stack[start].num = stack[(start + 1)].num;
	stack[(start + 1)].num = temp;
	ft_putstr_fd(msg, 1);
}

void	ft_push_elem(t_elem *stack_a, t_elem *stack_b, char *msg)
{
	int	a_index;
	int	b_index;

	a_index = 0;
	while (stack_a[a_index].set != 1)
		a_index++;
	b_index = 0;
	while ((stack_b[b_index].index != -1) && (stack_b[b_index].set != 1))
		b_index++;
	b_index--;
	stack_b[b_index].num = stack_a[a_index].num;
	stack_b[b_index].set = 1;
	stack_a[a_index].num = 0;
	stack_a[a_index].set = 0;
	ft_putstr_fd(msg, 1);
}
