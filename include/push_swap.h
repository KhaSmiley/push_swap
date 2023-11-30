/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:26:15 by kboulkri          #+#    #+#             */
/*   Updated: 2023/11/20 19:05:37 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
}					t_stack;

/* Stack_creation */

t_stack				*new_link(int nbr);
void				add_link_back(t_stack **stack, t_stack *new_link);

/* Storage */

int					lst_atoi(const char *nbr, t_stack *stack_a);
t_stack				*ft_storage(int argc, char **av);

/* Checker */

int					is_sign(char c);
int					is_digit(char c);
int					is_zero(char *av);
int					number_strcmp(char *s1, char *s2);
int					arg_is_number(char *av);
int					check_duplicates(char **av);
int					check_arg_input(char **av);
int					ft_is_sorted(t_stack *stack);

int					ft_find_index(t_stack *a, int nbr);
int					ft_find_place_b(t_stack *stack_b, int nbr_push);
int					ft_find_place_a(t_stack *stack_a, int nbr_push);

void				ft_free(t_stack **stack);

int					ft_checksorted(t_stack *stack_a);

int					ft_error(void);
int					ft_error_atoi(t_stack *stack_a);

int					ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);

int					ft_rotate_type_ba(t_stack *a, t_stack *b);
int					ft_rotate_type_ab(t_stack *a, t_stack *b);

void				ft_sort_three(t_stack **stack_a);

void				ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
t_stack				*ft_sort_b(t_stack **stack_a);
t_stack				**ft_sort_a(t_stack **stack_a, t_stack **stack_b);
void				ft_sort(t_stack **stack_a);

t_stack				*lst_last(t_stack *lst);
int					lst_size(t_stack *lst);
int					ft_min(t_stack *a);
int					ft_max(t_stack *a);

void				ft_push(t_stack **src, t_stack **dest);
void				pa(t_stack **a, t_stack **b, int c);
void				pb(t_stack **a, t_stack **b, int c);

void				ft_reverse_rotate(t_stack **stack);
void				rra(t_stack **a, int c);
void				rrb(t_stack **b, int c);
void				rrr(t_stack **a, t_stack **b, int c);

void				ft_rotate(t_stack **stack);
void				ra(t_stack **a, int c);
void				rb(t_stack **b, int c);
void				rr(t_stack **a, t_stack **b, int c);

int					ft_case_rarb(t_stack *a, t_stack *b, int c);
int					ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int					ft_case_rrarb(t_stack *a, t_stack *b, int c);
int					ft_case_rarrb(t_stack *a, t_stack *b, int c);

int					ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rrarb_a(t_stack *a, t_stack *b, int c);

t_stack				*new_link(int nbr);
void				add_link_back(t_stack **stack, t_stack *new_link);

t_stack				*ft_storage(int argc, char **av);

void				ft_swap(t_stack **stack);
void				sa(t_stack **a, int c);
void				sb(t_stack **b, int c);
void				ss(t_stack **a, t_stack **b, int c);

#endif