/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tiny.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:54:35 by kboulkri          #+#    #+#             */
/*   Updated: 2023/11/07 17:39:06 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_three(t_stack **stack_a)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*stack_a)->nbr > (*stack_a)->next->nbr)
			sa(stack_a, 0);
		if ((*stack_a)->nbr > (*stack_a)->next->next->nbr)
			ra(stack_a, 0);
		if ((*stack_a)->nbr > (*stack_a)->next->nbr
			&& (*stack_a)->nbr > (*stack_a)->next->next->nbr)
			ra(stack_a, 0);
		if ((*stack_a)->next->nbr > (*stack_a)->next->next->nbr)
			rra(stack_a, 0);
		i++;
	}
}
