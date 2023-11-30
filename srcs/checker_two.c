/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:01:06 by kboulkri          #+#    #+#             */
/*   Updated: 2023/09/30 22:52:09 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	arg_is_number(char *av)
{
	int	i;

	i = 0;
	if (is_sign(av[i]) && av[i + 1] != '\0')
		i++;
	while (av[i] && is_digit(av[i]))
		i++;
	if (av[i] != '\0' && !is_digit(av[i]))
		return (0);
	return (1);
}

int	check_duplicates(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 1;
		while (av[j])
		{
			if (j != i && number_strcmp(av[i], av[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_arg_input(char **av)
{
	int	nb_zero;
	int	i;

	i = 1;
	nb_zero = 0;
	while (av[i])
	{
		if (!arg_is_number(av[i]))
			return (0);
		nb_zero += is_zero(av[i]);
		i++;
	}
	if (nb_zero > 1)
		return (0);
	if (check_duplicates(av))
		return (0);
	return (1);
}
