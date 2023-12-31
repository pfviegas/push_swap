/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:39:49 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/14 10:35:38 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

int			ft_printf(const char *format, ...);
t_stack		*check_args(int argc, char **argv);
char		**ft_split(char const *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_atoi(const char *str);
int			ft_isdigit(int c);
void		check_doubles(char **arg);
void		error(int error);
void		save_args(char **argv, t_stack **stack_a);
void		add_back(t_stack **stack, t_stack *stack_new);
t_stack		*stack_new(int content);
t_stack		*stack_last(t_stack *lst);
int			stack_size(t_stack *lst);
int			is_stack_sorted(t_stack *stack_a);
void		free_stack(t_stack **lst);
void		sort_stack(t_stack **stack_a);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **b);
void		pa(t_stack **stack_a, t_stack **b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		rrr_sub(t_stack **stack_b);
void		check_size(t_stack **stack_a);
void		sort_3(t_stack **stack_a);
int			min(t_stack *stack_a);
int			max(t_stack *stack_a);
t_stack		*sort_b(t_stack **stack_a);
t_stack		**sort_a(t_stack **stack_a, t_stack **stack_b);
void		sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
int			move_type_ab(t_stack *stack_a, t_stack *stack_b);
int			move_type_ba(t_stack *stack_a, t_stack *stack_b);
int			find_index(t_stack *stack_a, int nbr);
int			find_place_b(t_stack *stack_b, int nbr);
int			find_place_a(t_stack *stack_a, int nbr);
int			case_rarb_a(t_stack *stack_a, t_stack *stack_b, int nbr);
int			case_rrarrb_a(t_stack *stack_a, t_stack *stack_b, int nbr);
int			case_rarrb_a(t_stack *stack_a, t_stack *stack_b, int nbr);
int			case_rrarb_a(t_stack *stack_a, t_stack *stack_b, int nbr);
int			case_rarb_b(t_stack *stack_a, t_stack *stack_b, int nbr);
int			case_rrarrb_b(t_stack *stack_a, t_stack *stack_b, int nbr);
int			case_rrarb_b(t_stack *stack_a, t_stack *stack_b, int nbr);
int			case_rarrb_b(t_stack *stack_a, t_stack *stack_b, int nbr);
int			apply_rarb(t_stack **stack_a, t_stack **stack_b, int nbr, char s);
int			apply_rrarrb(t_stack **stack_a, t_stack **stack_b, int nbr, char s);
int			apply_rrarb(t_stack **stack_a, t_stack **stack_b, int nbr, char s);
int			apply_rarrb(t_stack **stack_a, t_stack **stack_b, int nbr, char s);

#endif
