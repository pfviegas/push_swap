/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:39:49 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/05 17:53:53 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

int			ft_printf(const char *format, ...);
t_stack		*check_args(int argc, char **argv);
char		**ft_split(char const *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_atoi(const char *str);
int			ft_isdigit(int c);
void		check_doubles(int num, char *arg[], int i);
void		error(int error);
void		save_args(char **argv, t_stack **stk_a);
void		add_back(t_stack **stack, t_stack *stack_new);
t_stack		*stack_new(int content, int index);
t_stack		*stack_last(t_stack *lst);
int			stack_size(t_stack *lst);
int			is_stack_sorted(t_stack *stack_a);
void		free_stack(t_stack **lst);
void		sa(t_stack **a, int print);
void		sb(t_stack **b, int print);
void		ss(t_stack **a, t_stack **b, int print);
void		pa(t_stack **a, t_stack **b, int print);
void		pb(t_stack **stack_a, t_stack **stack_b, int print);
void		ra(t_stack **a, int print);
void		rb(t_stack **b, int print);
void		rr(t_stack **a, t_stack **b, int print);
void		rra(t_stack **a, int print);
void		rrb(t_stack **b, int print);
void		rrr(t_stack **a, t_stack **b, int print);
void		rrr_sub(t_stack **b, int print);
void		check_size (t_stack **stack_a);
void		sort_3(t_stack **stack_a);
int			min(t_stack *stack_a);
int			max(t_stack *stack_a);
t_stack		*sort_b(t_stack **stack_a);
void		sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
int			rotate_type_ab(t_stack *a, t_stack *b);
int			rotate_type_ba(t_stack *a, t_stack *b);
int			find_index(t_stack *stack_a, int nbr);
int			case_rrarrb(t_stack *a, t_stack *_b, int c);
int			find_place_b(t_stack *stack_b, int nbr_push);
int			find_place_a(t_stack *stack_a, int nbr_push);

#endif
