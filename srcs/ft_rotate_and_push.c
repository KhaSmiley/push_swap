/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_and_push.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:37:46 by kboulkri          #+#    #+#             */
/*   Updated: 2023/11/07 17:34:39 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_apply_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c && ft_find_place_b(*b, c) > 0)
			rr(a, b, 0);
		while ((*a)->nbr != c)
			ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != c && ft_find_place_a(*a, c) > 0)
			rr(a, b, 0);
		while ((*b)->nbr != c)
			rb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			ra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c && ft_find_place_b(*b, c) > 0)
			rrr(a, b, 0);
		while ((*a)->nbr != c)
			rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != c && ft_find_place_a(*a, c) > 0)
			rrr(a, b, 0);
		while ((*b)->nbr != c)
			rrb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			rra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c)
			rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			rra(a, 0);
		while ((*b)->nbr != c)
			rb(b, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c)
			ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			ra(a, 0);
		while ((*b)->nbr != c)
			rrb(b, 0);
		pa(a, b, 0);
	}
	return (-1);
}
