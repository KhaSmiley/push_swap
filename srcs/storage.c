/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   storage.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:43:22 by kboulkri          #+#    #+#             */
/*   Updated: 2023/11/20 17:35:46 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	lst_atoi(const char *nbr, t_stack *stack_a)
{
	long long	result;
	int			sign;
	int			y;

	result = 0;
	sign = 1;
	y = 1;
	if (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (*nbr >= '0' && *nbr <= '9')
	{
		result = result * 10 + (*nbr - '0');
		nbr++;
	}
	if ((y * result) > 2147483647 || (y * result) < -2147483648)
		ft_error_atoi(stack_a);
	result *= sign;
	return (result);
}

t_stack	*ft_storage(int argc, char **av)
{
	t_stack	*stack_a;
	long	i;
	int		j;

	i = 1;
	stack_a = NULL;
	while (i < argc)
	{
		j = lst_atoi(av[i], stack_a);
		add_link_back(&stack_a, new_link(j));
		i++;
	}
	return (stack_a);
}
