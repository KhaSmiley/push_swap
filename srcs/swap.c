/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:16:55 by kboulkri          #+#    #+#             */
/*   Updated: 2023/11/07 17:35:36 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	sa(t_stack **a, int c)
{
	if (c == 0)
		ft_printf("sa\n");
	ft_swap(a);
}

void	sb(t_stack **b, int c)
{
	if (c == 0)
		ft_printf("sb\n");
	ft_swap(b);
}

void	ss(t_stack **a, t_stack **b, int c)
{
	if (c == 0)
		ft_printf("ss\n");
	ft_swap(a);
	ft_swap(b);
}
