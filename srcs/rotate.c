/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:04:47 by kboulkri          #+#    #+#             */
/*   Updated: 2023/11/07 17:42:01 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rotate(t_stack **stack)
{
	t_stack	*tmp;

	if (!*stack || !(*stack)->next)
	{
		return ;
	}
	tmp = *stack;
	*stack = (*stack)->next;
	lst_last(*stack)->next = tmp;
	tmp->next = NULL;
}

void	ra(t_stack **a, int c)
{
	if (c == 0)
		ft_printf("ra\n");
	ft_rotate(a);
}

void	rb(t_stack **b, int c)
{
	if (c == 0)
		ft_printf("rb\n");
	ft_rotate(b);
}

void	rr(t_stack **a, t_stack **b, int c)
{
	if (c == 0)
		ft_printf("rr\n");
	ft_rotate(a);
	ft_rotate(b);
}
