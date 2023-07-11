/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:20:03 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/11 14:22:00 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// calculates the required amount of rotation.
// calculations are done for ra+rb case.
int	case_rarb_a(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	moves;

	moves = find_place_a(stack_a, c);
	if (moves < find_index(stack_b, c))
		moves = find_index(stack_b, c);
	return (moves);
}

// calculates the required amount of rotation.
// calculations are done for rra+rrb case.
int	case_rrarrb_a(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	moves;

	moves = 0;
	if (find_place_a(stack_a, c))
		moves = stack_size(stack_a) - find_place_a(stack_a, c);
	if ((moves < (stack_size(stack_b) - find_index(stack_b, c))) && 
		find_index(stack_b, c))
		moves = stack_size(stack_b) - find_index(stack_b, c);
	return (moves);
}

// calculates the required amount of rotation.
// calculations are done for ra+rrb case.
int	case_rarrb_a(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	moves;

	moves = 0;
	if (find_index(stack_b, c))
		moves = stack_size(stack_b) - find_index(stack_b, c);
	moves = find_place_a(stack_a, c) + moves;
	return (moves);
}

// calculates the required amount of rotation.
// calculations are done for rra+rb case.
int	case_rrarb_a(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	moves;

	moves = 0;
	if (find_place_a(stack_a, c))
		moves = stack_size(stack_a) - find_place_a(stack_a, c);
	moves = find_index(stack_b, c) + moves;
	return (moves);
}
