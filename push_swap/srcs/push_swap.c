/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:08:30 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/03 15:15:00 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack *tmp;
	
//	t_stack	*stack_b;

//	b = NULL;
	a = check_args(argc, argv);

	tmp = a;
	ft_printf("a size: %d\n", ft_lstsize(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}

/*
	if (!is_stack_sorted(a))
		check_size(a);

	sa(&a, 0);
	tmp = a;
	ft_printf("a size: %d\n", ft_lstsize(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
	ra(&a, 0);
	tmp = a;
	ft_printf("a size: %d\n", ft_lstsize(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
	rra(&a, 0);
	tmp = a;
	ft_printf("a size: %d\n", ft_lstsize(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
*/

//	free(a);
	return (0);
}
