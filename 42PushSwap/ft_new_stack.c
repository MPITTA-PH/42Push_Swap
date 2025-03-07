/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:49:37 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/02/27 17:47:02 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*ft_new_stack(int ac, char **av, int option)
{
	t_elem	*stack;
	int		i;

	stack = ft_calloc(sizeof(t_elem), (ac + 1));
	if (stack == NULL)
		return (NULL);
	i = 0;
	while (i < (ac - 1))
	{
		if (option == 1)
		{
			stack[i].num = ft_atoi(av[i]);
			stack[i].set = 1;
		}
		else
		{
			stack[i].num = 0;
			stack[i].set = 0;
		}
		stack[i].index = i;
		i++;
	}
	stack[i].index = -1;
	return (stack);
}
