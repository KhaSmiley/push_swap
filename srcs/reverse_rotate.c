/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:30:56 by kboulkri          #+#    #+#             */
/*   Updated: 2023/11/07 17:39:58 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	last = lst_last(*stack);
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	last->next = *stack;
	tmp->next = NULL;
	*stack = last;
}

void	rra(t_stack **a, int c)
{
	if (c == 0)
		ft_printf("rra\n");
	ft_reverse_rotate(a);
}

void	rrb(t_stack **b, int c)
{
	if (c == 0)
		ft_printf("rrb\n");
	ft_reverse_rotate(b);
}

void	rrr(t_stack **a, t_stack **b, int c)
{
	if (c == 0)
		ft_printf("rrr\n");
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
}
