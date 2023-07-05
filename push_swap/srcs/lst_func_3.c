/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:52:42 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/05 17:55:56 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// finds the correct place of the number in stack_b.
// checks what index number nbr_push will getafter being pushed to the stack_b.
int	find_place_b(t_stack *stack_b, int nbr_push)
{
	int		index;
	t_stack	*tmp;

	index = 1;
	if (nbr_push > stack_b->content && nbr_push < stack_last(stack_b)->content)
		index = 0;
	else if (nbr_push > max(stack_b) || nbr_push < min(stack_b))
		index = find_index(stack_b, max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->content < nbr_push || tmp->content > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			index++;
		}
	}
	return (index);
}

// finds the correct place of the number in stack_a.
// checks what index number nbr_push will getafter being pushed to the stack_a.
int	find_place_a(t_stack *stack_a, int nbr_push)
{
	int		index;
	t_stack	*tmp;

	index = 1;
	if (nbr_push < stack_a->content && nbr_push > stack_last(stack_a)->content)
		index = 0;
	else if (nbr_push > max(stack_a) || nbr_push < min(stack_a))
		index = find_index(stack_a, min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->content > nbr_push || tmp->content < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			index++;
		}
	}
	return (index);
}