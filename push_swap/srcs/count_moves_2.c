/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:20:23 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/06 15:49:41 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// calculates how many times we should rotate the stacks together.
// after a certain amoun of rotate, we will proceed only with one stack rotation
int	case_rarb(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	moves;

	moves = find_place_b(stack_b, c);
	if (moves < find_index(stack_a, c))
		moves = find_index(stack_a, c);
	return (moves);
}

// calculates how many times we should rotate the stacks together.
// after a certain amoun of rotate, we will proceed only with one stack
// rotation. Since here we have reverse rotate,rather than index number,
// we check reverse index number which is calculated by list_size (index_number)
int	case_rrarrb(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	moves;

	moves = 0;
	if (find_place_b(stack_b, c))
		moves = stack_size(stack_b) - find_place_b(stack_b, c);
	if ((moves < (stack_size(stack_a) - find_index(stack_a, c))) && find_index(stack_a, c))
		moves = stack_size(stack_a) - find_index(stack_a, c);
	return (moves);
}

// calculates the number of moves for rra+rb case.
int	case_rrarb(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	moves;

	moves = 0;
	if (find_index(stack_a, c))
		moves = stack_size(stack_a) - find_index(stack_a, c);
	moves = find_place_b(stack_b, c) + moves;
	return (moves);
}

// calculates the number of moves for ra+rrb case.
int	case_rarrb(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	moves;

	moves = 0;
	if (find_place_b(stack_b, c))
		moves = stack_size(stack_b) - find_place_b(stack_b, c);
	moves = find_index(stack_a, c) + moves;
	return (moves);
}
