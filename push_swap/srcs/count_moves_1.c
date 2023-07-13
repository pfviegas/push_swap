/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:20:11 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/13 16:14:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// calculates which rotation combination is best to use to sort the stack. 
// this function is used during push from A to B.
int	move_type_ab(t_stack *stack_a, t_stack *stack_b)
{
	int		moves;
	t_stack	*tmp;

	tmp = stack_a;
	moves = case_rrarrb_b(stack_a, stack_b, stack_a->content);
	while (tmp)
	{
		if (moves > case_rarb_b(stack_a, stack_b, tmp->content))
			moves = case_rarb_b(stack_a, stack_b, tmp->content);
		if (moves > case_rrarrb_b(stack_a, stack_b, tmp->content))
			moves = case_rrarrb_b(stack_a, stack_b, tmp->content);
		if (moves > case_rarrb_b(stack_a, stack_b, tmp->content))
			moves = case_rarrb_b(stack_a, stack_b, tmp->content);
		if (moves > case_rrarb_b(stack_a, stack_b, tmp->content))
			moves = case_rrarb_b(stack_a, stack_b, tmp->content);
		tmp = tmp->next;
	}
	return (moves);
}

// calculates which rotation combination is best to use to sort the stack. 
// this function is used during push from B to A.
int	move_type_ba(t_stack *stack_a, t_stack *stack_b)
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
			moves = case_rarrb_a(stack_a, stack_b, tmp->content);
		if (moves > case_rrarb_a(stack_a, stack_b, tmp->content))
			moves = case_rrarb_a(stack_a, stack_b, tmp->content);
		tmp = tmp->next;
	}
	return (moves);
}
