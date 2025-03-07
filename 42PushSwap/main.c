/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:52:54 by mpitta-p          #+#    #+#             */
/*   Updated: 2025/02/27 17:53:34 by mpitta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free(t_elem *stack_a, t_elem *stack_b, char **input, int tofree);
static void	ft_sort(t_elem *stack_a, t_elem *stack_b, int ac);
static char	**ft_get_elems(int *ac, char **av, int *tofree);
static int	ft_count_args(char **av);

int	main(int ac, char **av)
{
	char	**input;
	t_elem	*stack_a;
	t_elem	*stack_b;
	int		to_free;
	int		error;

	++av;
	input = av;
	to_free = 0;
	if (ac == 2)
		input = ft_get_elems(&ac, input, &to_free);
	error = ft_find_errors(ac, input);
	if (error <= 0)
	{
		ft_free(NULL, NULL, input, to_free);
		return (0);
	}
	stack_a = ft_new_stack(ac, input, 1);
	stack_b = ft_new_stack(ac, input, 0);
	if (ft_is_sorted(stack_a) == -1)
		ft_sort(stack_a, stack_b, ac);
	ft_free (stack_a, stack_b, input, to_free);
	return (0);
}

static char	**ft_get_elems(int *ac, char **av, int *to_free)
{
	char	**splited_list;

	splited_list = ft_split(av[0], 32);
	*ac = ft_count_args(splited_list) + 1;
	*to_free = 1;
	return (splited_list);
}

static int	ft_count_args(char **av)
{
	int	n;

	n = 0;
	while (av[n])
		n++;
	return (n);
}

static void	ft_free(t_elem *stack_a, t_elem *stack_b, char **input, int to_free)
{
	int	x;

	x = 0;
	if (to_free)
	{
		while (input[x] != 0)
		{
			free (input[x]);
			++x;
		}
		free (input[x]);
		free (input);
	}
	if (stack_a != NULL)
		free (stack_a);
	if (stack_b != NULL)
		free (stack_b);
	return ;
}

static void	ft_sort(t_elem *stack_a, t_elem *stack_b, int ac)
{
	if (ac == 3)
	{
		if (ft_is_sorted(stack_a) == -1)
			ft_swap_elements(stack_a, "sa\n");
	}
	else if (ac == 4)
		ft_sort_three(stack_a);
	else
		ft_sort_stack(stack_a, stack_b, ac);
}
