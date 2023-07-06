/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_funcs_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:26:17 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/06 15:26:17 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// finds and returns the smallest number in the given stack.
int	min(t_stack *stack_a)
{
	int		min;

	min = stack_a->content;
	while (stack_a)
	{
		if (stack_a->content < min)
			min = stack_a->content;
		stack_a = stack_a->next;
	}
	return (min);
}

// finds and returns the biggest number in the given stack.
int	max(t_stack *stack_a)
{
	int		max;

	max = stack_a->content;
	while (stack_a)
	{
		if (stack_a->content > max)
			max = stack_a->content;
		stack_a = stack_a->next;
	}
	return (max);
}

// frees the stack.
void	free_stack(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->content = 0;
		free(*lst);
		*lst = tmp;
	}
}

// checks the index of a number in the stack.
int	find_index(t_stack *stack_a, int nbr)
{
	int		index;

	index = 0;
	while (stack_a->content != nbr)
	{
		index++;
		stack_a = stack_a->next;
	}
	stack_a->index = 0;
	return (index);
}
