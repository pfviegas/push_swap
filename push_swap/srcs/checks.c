/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:12:58 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/10 14:42:00 by pviegas          ###   ########.fr       */
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
	int		i;
	char	**arg;

	i = 1;
	stack_a = NULL;
	if (argc < 2)
		exit(1);
	else if (argc == 2)
	{
		arg = ft_split(argv[1], ' ');
		if (!arg)
		{
			free(arg);
			error(6);
		}
	}
	else
		arg = argv;
	while (arg[i])
	{
		check_doubles(ft_atoi(arg[i]), arg, i);
		i++;
	}
	save_args(arg, &stack_a);
	if (argc == 2)
	{		
		i = 0;
		while (arg[i])
			i++;
		while (i-- > 1)
		{
			printf ("arg[%d] --> %s\n", i, arg[i]);
			free(arg[i]);
		}
//		free(arg[i]);
		printf ("i --> %d\n", i);
		free(arg);
	}
	return (stack_a);
}

// check if there are doubles in the arguments
void	check_doubles(int num, char **arg, int i)
{
	i++;
	while (arg[i])
	{
		if (num == ft_atoi(arg[i]))
			error(3);
		i++;
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
		add_back(stack_a, stack_new(ft_atoi(argv[i]), i - 1));
		i++;
	}
}

void	check_size (t_stack **stack_a)
{
	size_t	size;
	
	size = stack_size(*stack_a);
	if (size <= 3)
	{
		sort_3(stack_a);
	}
	else
	{
		sort_stack(stack_a);
	}
}
