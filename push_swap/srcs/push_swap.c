/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:08:30 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/06 11:36:32 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
//	t_stack	*tmp;

	a = check_args(argc, argv);
	if (!a)
	{
		free_stack(&a);
		error(5);
	}	
	if (!is_stack_sorted(a))
		check_size(&a);

/*   TESTES

	ft_printf("\n*******************************************************\n");

	tmp = a;
	ft_printf("a size: %d\n", stack_size(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}

	ft_printf("\n*******************************************************\n");	
	
	sa(&a, 0);
	tmp = a;
	ft_printf("a size: %d\n", stack_size(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
	ra(&a, 0);
	sa(&a, 0);
	tmp = a;
	ft_printf("a size: %d\n", stack_size(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
	rra(&a, 0);
	tmp = a;
	ft_printf("a size: %d\n", stack_size(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
	

	ft_printf("\n*******************************************************\n");

	int conta = 0;
	while (conta <= 20)
	{
		pb(&a, &b, 0);
		conta++;	
	}
	ft_printf("a size: %d\n", stack_size(a));
	tmp = b;
	ft_printf("b size: %d\n", stack_size(b));
	while (tmp)
	{
		ft_printf("b\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}

	ft_printf("\n*******************************************************\n");

	sb(&b, 0);
	tmp = b;
	ft_printf("b size: %d\n", stack_size(b));
	while (tmp)
	{
		ft_printf("b\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
	rb(&b, 0);
	tmp = b;
	ft_printf("b size: %d\n", stack_size(b));
	while (tmp)
	{
		ft_printf("b\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
	rrb(&b, 0);
	tmp = b;
	ft_printf("b size: %d\n", stack_size(b));
	while (tmp)
	{
		ft_printf("b\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}

	ft_printf("\n*******************************************************\n");

	conta = 0;
	while (conta <= 20)
	{
		pa(&a, &b, 0);
		conta++;	
	}		

	ft_printf("a size: %d\n", stack_size(a));
	ft_printf("b size: %d\n", stack_size(b));
	tmp = a;
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}

	ft_printf("\n*******************************************************\n");

	pb(&a, &b, 0);
	pb(&a, &b, 0);
	pb(&a, &b, 0);

	tmp = a;
	ft_printf("a size: %d\n", stack_size(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}

	tmp = b;
	ft_printf("b size: %d\n", stack_size(b));
	while (tmp)
	{
		ft_printf("b\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}

	ft_printf("\n*******************************************************\n");

	ss(&a, &b, 0);

	tmp = a;
	ft_printf("a size: %d\n", stack_size(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}

	tmp = b;
	ft_printf("b size: %d\n", stack_size(b));
	while (tmp)
	{
		ft_printf("b\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}

	ft_printf("\n*******************************************************\n");

	rr(&a, &b, 0);

	tmp = a;
	ft_printf("a size: %d\n", stack_size(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}

	tmp = b;
	ft_printf("b size: %d\n", stack_size(b));
	while (tmp)
	{
		ft_printf("b\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}	

	ft_printf("\n*******************************************************\n");

	rrr(&a, &b, 0);

	tmp = a;
	ft_printf("a size: %d\n", stack_size(a));
	while (tmp)
	{
		ft_printf("a\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}

	tmp = b;
	ft_printf("b size: %d\n", stack_size(b));
	while (tmp)
	{
		ft_printf("b\tcontent: %d\tindex: %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}	
*/

	free_stack(&a);
	return (0);
}
