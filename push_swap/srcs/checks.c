/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:12:58 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/14 10:35:27 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// check if arguments is equal to 2 
// it means it is a quoted string and split them
// check if arguments are valid 
// (integers, no doubles, no strings, no empty)
// if yes, save them in a stack
t_stack	*check_args(int argc, char **argv)
{
	t_stack	*stack_a;
	char	**arg;

	stack_a = NULL;
	if (argc < 2)
		exit(1);
	else
		arg = argv;
	check_doubles(arg);
	save_args(arg, &stack_a);
	return (stack_a);
}

// check if there are doubles in the arguments
void	check_doubles(char **arg)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (arg[i])
	{
		while (arg[j])
		{
			if (ft_atoi(arg[i]) == ft_atoi(arg[j]))
				error(3);
			j++;
		}
		i++;
		j = i + 1;
	}
}

// error messages (remove exit code from message)
void	error(int error)
{
	ft_printf ("Error\n", error);
	exit(1);
}

// saves the values passed as arguments in stack a
void	save_args(char **argv, t_stack **stack_a)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		add_back(stack_a, stack_new(ft_atoi(argv[i])));
		i++;
	}
}

void	check_size(t_stack **stack_a)
{
	size_t	size;

	size = stack_size(*stack_a);
	if (size <= 3)
		sort_3(stack_a);
	else
		sort_stack(stack_a);
}
