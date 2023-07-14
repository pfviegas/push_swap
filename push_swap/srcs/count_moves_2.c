/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:20:23 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/14 10:35:23 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// calculates how many times we should rotate the stacks together.
// after a certain amoun of rotate, we will proceed only with one stack rotation
int	case_rarb_b(t_stack *stack_a, t_stack *stack_b, int nbr)
{
	int	moves;

	moves = find_place_b(stack_b, nbr);
	if (moves < find_index(stack_a, nbr))
		moves = find_index(stack_a, nbr);
	return (moves);
}

// calculates how many times we should rotate the stacks together.
// after a certain amoun of rotate, we will proceed only with one stack
// rotation. Since here we have reverse rotate,rather than index number,
// we calculate the number of moves from the top of the stack.
int	case_rrarrb_b(t_stack *stack_a, t_stack *stack_b, int nbr)
{
	int	moves;

	moves = 0;
	if (find_place_b(stack_b, nbr))
		moves = stack_size(stack_b) - find_place_b(stack_b, nbr);
	if ((moves < (stack_size(stack_a) - find_index(stack_a, nbr))) && 
		find_index(stack_a, nbr))
		moves = stack_size(stack_a) - find_index(stack_a, nbr);
	return (moves);
}

// calculates the number of moves for rra+rb case.
int	case_rrarb_b(t_stack *stack_a, t_stack *stack_b, int nbr)
{
	int	moves;

	moves = 0;
	if (find_index(stack_a, nbr))
		moves = stack_size(stack_a) - find_index(stack_a, nbr);
	moves = find_place_b(stack_b, nbr) + moves;
	return (moves);
}

// calculates the number of moves for ra+rrb case.
int	case_rarrb_b(t_stack *stack_a, t_stack *stack_b, int nbr)
{
	int	moves;

	moves = 0;
	if (find_place_b(stack_b, nbr))
		moves = stack_size(stack_b) - find_place_b(stack_b, nbr);
	moves = find_index(stack_a, nbr) + moves;
	return (moves);
}
