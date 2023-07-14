/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:08:30 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/14 10:35:11 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = check_args(argc, argv);
	if (!a)
	{
		free_stack(&a);
		error(5);
	}
	if (!is_stack_sorted(a))
		check_size(&a);
	free_stack(&a);
	return (0);
}
