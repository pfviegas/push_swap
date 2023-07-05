/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:25:39 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/05 17:34:29 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calculates how many times we should rotate the stacks together.
// after a certain amoun of rotate, we will proceed only with one stack
// rotation. Since here we have reverse rotate,rather than index number,
// we check reverse index number which is calculated by list_size (index_number)
int	case_rrarrb(t_stack *a, t_stack *_b, int c)
{
	int	moves;

	moves = 0;
	if (ft_find_place_b(b, c))
		moves = stack_size(b) - ft_find_place_b(b, c);
	if ((moves < (stack_size(a) - find_index(a, c))) && find_index(a, c))
		moves = stack_size(a) - find_index(a, c);
	return (moves);
}