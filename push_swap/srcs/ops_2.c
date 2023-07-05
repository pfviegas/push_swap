/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:27:30 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/05 13:45:43 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// pa (push a)
// take the first element at the top of b and put it at the top of a. 
// do nothing if b is empty.
void	pa(t_stack **stack_a, t_stack **stack_b, int print)
{
	t_stack	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_a;
	*stack_a = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_a)->next = tmp;
	if (print == 0)
		write(1, "pa\n", 3);
}

// pb (push b)
// take the first element at the top of a and put it at the top of b.
// do nothing if a is empty.
void	pb(t_stack **stack_a, t_stack **stack_b, int print)
{
	t_stack	*tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_b;
	*stack_b = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_b)->next = tmp;
	if (print == 0)
		write(1, "pb\n", 3);
}

// ra (rotate a)
// shift up all elements of stack a by 1. 
// the first element becomes the last.
void	ra(t_stack **stack_a, int print)
{
	t_stack	*tmp;
	// 2 1 0
	if (!*stack_a || !(*stack_a)->next)
		return ;
	// 2
	tmp = *stack_a;
	// 0
	*stack_a = stack_last(*stack_a);
	// 0->next = 2
	(*stack_a)->next = tmp;
	// 1
	*stack_a = tmp->next;
	// 2->next = NULL
	tmp->next = NULL;
	if (print == 0)
		write(1, "ra\n", 3);
}

// rb (rotate b)
// shift up all elements of stack b by 1. 
// the first element becomes the last.
void	rb(t_stack **stack_b, int print)
{
	t_stack	*tmp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	*stack_b = stack_last(*stack_b);
	(*stack_b)->next = tmp;
	*stack_b = tmp->next;
	tmp->next = NULL;
	if (print == 0)
		write(1, "rb\n", 3);
}

// rr : ra and rb at the same time
void	rr(t_stack **stack_a, t_stack **stack_b, int print)
{
	t_stack	*tmp;

	if (!*stack_a || !((*stack_a)->next) || !*stack_b || !((*stack_b)->next))
		return ;
	tmp = *stack_a;
	*stack_a = stack_last(*stack_a);
	(*stack_a)->next = tmp;
	*stack_a = tmp->next;
	tmp->next = NULL;
	tmp = *stack_b;
	*stack_b = stack_last(*stack_b);
	(*stack_b)->next = tmp;
	*stack_b = tmp->next;
	tmp->next = NULL;
	if (print == 0)
		write(1, "rr\n", 3);
}
