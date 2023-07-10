/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:50:18 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/10 12:20:27 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// sorts the stack_a
// all values pushed to stack_b, sorted and pushed back to stack_a. 
// Because, even the stack_a is sorted at the end, the minimum number have to 
// at the top of the stack_a. 
// So, it simply brings the smallest number of the stack_a to the top.
void	sort_stack(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (stack_size(*stack_a) == 2)
		sa(stack_a, 0);
	else
	{
		stack_b = sort_b(stack_a);
		stack_a = sort_a(stack_a, &stack_b);
		i = find_index(*stack_a, min(*stack_a));
		if (i < stack_size(*stack_a) - i)
		{
			while ((*stack_a)->content != min(*stack_a))
				ra(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->content != min(*stack_a))
				rra(stack_a, 0);
		}			
	}	
}

// pushes one by one, all the elements in stack_a to the stack_b, 
// until only three elements are left in stack_a. 
// while pushing, it makes sure that stack_b is sorted. 
// when three elements are left, it calls the sort_3 function to sort 
// left over elements in stack_a.
t_stack	*sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (stack_size(*stack_a) > 3 && !is_stack_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (stack_size(*stack_a) > 3 && !is_stack_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (stack_size(*stack_a) > 3 && !is_stack_sorted(*stack_a))
		sort_b_till_3(stack_a, &stack_b);
	if (!is_stack_sorted(*stack_a))
		sort_3(stack_a);
	return (stack_b);
}

// pushing back the elements from stack_b to stack_a until stack_b is empty. 
t_stack	**sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == case_rarb_a(*stack_a, *stack_b, tmp->content))
				i = apply_rarb(stack_a, stack_b, tmp->content, 'b');
			else if (i == case_rarrb_a(*stack_a, *stack_b, tmp->content))
				i = apply_rarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == case_rrarrb_a(*stack_a, *stack_b, tmp->content))
				i = apply_rrarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == case_rrarb_a(*stack_a, *stack_b, tmp->content))
				i = apply_rrarb(stack_a, stack_b, tmp->content, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

// sort and push stacks until 3 elements left behind.
void	sort_b_till_3(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (stack_size(*stack_a) > 3 && !is_stack_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == case_rarb(*stack_a, *stack_b, tmp->content))
				i = apply_rarb(stack_a, stack_b, tmp->content, 'a');
			else if (i == case_rrarrb(*stack_a, *stack_b, tmp->content))
				i = apply_rrarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == case_rarrb(*stack_a, *stack_b, tmp->content))
				i = apply_rarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == case_rrarb(*stack_a, *stack_b, tmp->content))
				i = apply_rrarb(stack_a, stack_b, tmp->content, 'a');
			else
				tmp = tmp->next;
		}
	}
}

// sort the stack if there are only 3 elements.
void	sort_3(t_stack **stack_a)
{
	if ((*stack_a)->content == min(*stack_a))
	{
		rra(stack_a, 0);
		sa(stack_a, 0);
	}
	else if ((*stack_a)->content == max(*stack_a))
	{
		ra(stack_a, 0);
		if (!is_stack_sorted(*stack_a))
			sa(stack_a, 0);
	}
	else
	{
		if ((*stack_a)->content < (*stack_a)->next->content)
			rra(stack_a, 0);
		else
			sa(stack_a, 0);
	}
}
