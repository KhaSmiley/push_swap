/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:38:22 by kboulkri          #+#    #+#             */
/*   Updated: 2023/11/07 18:16:05 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_push(t_stack **src, t_stack **dest)
{
	t_stack	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;
}

void	pa(t_stack **a, t_stack **b, int c)
{
	ft_push(b, a);
	if (c == 0)
		ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b, int c)
{
	ft_push(a, b);
	if (c == 0)
		ft_printf("pb\n");
}
