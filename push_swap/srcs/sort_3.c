/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:50:18 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/03 16:59:15 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// sort the stack if there are only 3 elements.
void	sort_3(t_stack **stack_a)
{
	if (min(*stack_a) == (*stack_a)->content)
	{
		rra(stack_a, 0);
		sa(stack_a, 0);
	}
	else if (max(*stack_a) == (*stack_a)->content)
	{
		ra(stack_a, 0);
		if (!ft_checksorted(*stack_a))
			sa(stack_a, 0);
	}
	else
	{
		if (ft_find_index(*stack_a, max(*stack_a)) == 1)
			rra(stack_a, 0);
		else
			sa(stack_a, 0);
	}
}