/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:29:18 by pviegas           #+#    #+#             */
/*   Updated: 2023/06/30 11:29:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// creates a new node at the end of the stack
// with the content passed as argument
void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lstlast(*stack))->next = stack_new;
}

// creates a new stack node with given number.
t_stack	*ft_stack_new(int content, int index)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		error(4);
	new->content = content;
	new->index = index;
	new->next = NULL;
	return (new);
}

// This function returns the last element of the stack.
t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// returns the size of the stack.
int	ft_lstsize(t_stack *lst)
{
	size_t	i;
	t_stack *tmp;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

// if the stack is sorted.
int	is_stack_sorted(t_stack *lst)
{
	int	prev;

	prev = lst->content;
	while (lst->next)
	{
		lst = lst->next;
		if (prev > lst->content)
			return (0);
		prev = lst->content;
	}
	return (1);
}
