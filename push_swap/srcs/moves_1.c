/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:22:54 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/12 14:08:02 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// sa (swap a) 
// swap the first 2 elements at the top of stack a. 
// do nothing if there is only one or no elements.
void	sa(t_stack **stack_a)
{
	t_stack	*tmp;

	if (stack_size(*stack_a) < 2)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	write(1, "sa\n", 3);
}

// sb (swap b)
// swap the first 2 elements at the top of stack b. 
// do nothing if there is only one or no elements).
void	sb(t_stack **stack_b)
{
	t_stack	*tmp;

	if (stack_size(*stack_b) < 2)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	write(1, "sb\n", 3);
}

// ss 
// sa and sb at the same time.
void	ss(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if ((stack_size(*stack_a) < 2) || stack_size(*stack_b) < 2)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	write(1, "ss\n", 3);
}
