/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:39:49 by pviegas           #+#    #+#             */
/*   Updated: 2023/07/03 14:22:23 by pviegas          ###   ########.fr       */
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
void		ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack		*ft_stack_new(int content, int index);
t_stack		*ft_lstlast(t_stack *lst);
int			ft_lstsize(t_stack *lst);
int			is_stack_sorted(t_stack *stack_a);
void		sa(t_stack **a, int j);
void		sb(t_stack **b, int j);
void		ss(t_stack **a, t_stack **b, int j);
void		pa(t_stack **a, t_stack **b, int j);
void		pb(t_stack **stack_a, t_stack **stack_b, int j);
void		ra(t_stack **a, int j);
void		rb(t_stack **b, int j);
void		rr(t_stack **a, t_stack **b, int j);
void		rra(t_stack **a, int j);
void		rrb(t_stack **b, int j);
void		rrr(t_stack **a, t_stack **b, int j);
void		rrr_sub(t_stack **b, int j);
void		check_size (t_stack *stk_a);

#endif
