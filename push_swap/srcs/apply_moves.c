/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:50:37 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/14 10:34:48 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// rotates stack_a and stack_b
// in the same direction as required amount.
int	apply_rarb(t_stack **stack_a, t_stack **stack_b, int nbr, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->content != nbr && find_place_b(*stack_b, nbr) > 0)
			rr(stack_a, stack_b);
		while ((*stack_a)->content != nbr)
			ra(stack_a);
		while (find_place_b(*stack_b, nbr) > 0)
			rb(stack_b);
		pb(stack_a, stack_b);
	}
	else
	{
		while ((*stack_b)->content != nbr && find_place_a(*stack_a, nbr) > 0)
			rr(stack_a, stack_b);
		while ((*stack_b)->content != nbr)
			rb(stack_b);
		while (find_place_a(*stack_a, nbr) > 0)
			ra(stack_a);
		pa(stack_a, stack_b);
	}
	return (-1);
}

// rotate both stack_a and stack_b in the
// reverse direction as required amount.
int	apply_rrarrb(t_stack **stack_a, t_stack **stack_b, int nbr, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->content != nbr && find_place_b(*stack_b, nbr) > 0)
			rrr(stack_a, stack_b);
		while ((*stack_a)->content != nbr)
			rra(stack_a);
		while (find_place_b(*stack_b, nbr) > 0)
			rrb(stack_b);
		pb(stack_a, stack_b);
	}
	else
	{
		while ((*stack_b)->content != nbr && find_place_a(*stack_a, nbr) > 0)
			rrr(stack_a, stack_b);
		while ((*stack_b)->content != nbr)
			rrb(stack_b);
		while (find_place_a(*stack_a, nbr) > 0)
			rra(stack_a);
		pa(stack_a, stack_b);
	}
	return (-1);
}

// rotates the stack_a in reverse direction,
// the stack_b in oppsite direction of stack_a as required amount.
int	apply_rrarb(t_stack **stack_a, t_stack **stack_b, int nbr, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->content != nbr)
			rra(stack_a);
		while (find_place_b(*stack_b, nbr) > 0)
			rb(stack_b);
		pb(stack_a, stack_b);
	}
	else
	{
		while (find_place_a(*stack_a, nbr) > 0)
			rra(stack_a);
		while ((*stack_b)->content != nbr)
			rb(stack_b);
		pa(stack_a, stack_b);
	}
	return (-1);
}

// rotates the stack_b in reverse direction,
// the stack_a in oppsite direction of stack_a as required amount.
int	apply_rarrb(t_stack **stack_a, t_stack **stack_b, int nbr, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->content != nbr)
			ra(stack_a);
		while (find_place_b(*stack_b, nbr) > 0)
			rrb(stack_b);
		pb(stack_a, stack_b);
	}
	else
	{
		while (find_place_a(*stack_a, nbr) > 0)
			ra(stack_a);
		while ((*stack_b)->content != nbr)
			rrb(stack_b);
		pa(stack_a, stack_b);
	}
	return (-1);
}
