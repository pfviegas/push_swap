/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:23:12 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/12 14:09:06 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// rra (reverse rotate a)
// shift down all elements of stack a by 1. 
// the last element becomes the first.
void	rra(t_stack **stack_a)
{
	t_stack	*tmp;
	int		i;

	if (stack_size(*stack_a) < 2)
		return ;
	i = 0;
	tmp = *stack_a;
	while ((*stack_a)->next)
	{
		*stack_a = (*stack_a)->next;
		i++;
	}
	(*stack_a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	write(1, "rra\n", 4);
}

// rrb (reverse rotate b)
// shift down all elements of stack b by 1. 
// the last element becomes the first.
void	rrb(t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;

	if (stack_size(*stack_b) < 2)
		return ;
	i = 0;
	tmp = *stack_b;
	while ((*stack_b)->next)
	{
		i++;
		*stack_b = (*stack_b)->next;
	}
	(*stack_b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}

// rrr : rra and rrb at the same time.
void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;

	if ((stack_size(*stack_a) < 2) || stack_size(*stack_b) < 2)
		return ;
	i = 0;
	tmp = *stack_a;
	while ((*stack_a)->next)
	{
		i++;
		*stack_a = (*stack_a)->next;
	}
	(*stack_a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	rrr_sub(stack_b);
}

// Second part of the rrr function
void	rrr_sub(t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *stack_b;
	while ((*stack_b)->next)
	{
		i++;
		*stack_b = (*stack_b)->next;
	}
	(*stack_b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	write(1, "rrr\n", 4);
}
