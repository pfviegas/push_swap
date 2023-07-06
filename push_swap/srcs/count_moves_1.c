/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:20:11 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/06 15:48:59 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// calculates which rotation combination is best to use to sort the stack. 
// after rotation there is always one push operation is left to do which is 
// embedded in code, this function is used during push from A to B.
int	rotate_type_ab(t_stack *stack_a, t_stack *stack_b)
{
	int		moves;
	t_stack	*tmp;

	tmp = stack_a;
	moves = case_rrarrb(stack_a, stack_b, stack_a->content);
	while (tmp)
	{
		if (moves > case_rarb(stack_a, stack_b, tmp->content))
			moves = case_rarb(stack_a, stack_b, tmp->content);
		if (moves > case_rrarrb(stack_a, stack_b, tmp->content))
			moves = case_rrarrb(stack_a, stack_b, tmp->content);
		if (moves > case_rarrb(stack_a, stack_b, tmp->content))
			moves = case_rarrb(stack_a, stack_b, tmp->content);
		if (moves > case_rrarb(stack_a, stack_b, tmp->content))
			moves = case_rrarb(stack_a, stack_b, tmp->content);
		tmp = tmp->next;
	}
	return (moves);
}


// calculates which rotation combination is best to use to sort the stack. 
// after rotation there is always one push operation is left to do which is 
// embedded in code, this function is used during push from B to A.
int	rotate_type_ba(t_stack *stack_a, t_stack *stack_b)
{
	int		moves;
	t_stack	*tmp;

	tmp = stack_b;
	moves = case_rrarrb_a(stack_a, stack_b, stack_b->content);
	while (tmp)
	{
		if (moves > case_rarb_a(stack_a, stack_b, tmp->content))
			moves = case_rarb_a(stack_a, stack_b, tmp->content);
		if (moves > case_rrarrb_a(stack_a, stack_b, tmp->content))
			moves = case_rrarrb_a(stack_a, stack_b, tmp->content);
		if (moves > case_rarrb_a(stack_a, stack_b, tmp->content))
		if (moves > case_rarrb_a(stack_a, stack_b, tmp->content))
			moves = case_rarrb_a(stack_a, stack_b, tmp->content);
		if (moves > case_rrarb_a(stack_a, stack_b, tmp->content))
			moves = case_rrarb_a(stack_a, stack_b, tmp->content);
		tmp = tmp->next;
	}
	return (moves);
}