/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:16:06 by kboulkri          #+#    #+#             */
/*   Updated: 2023/11/20 17:38:06 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = ft_storage(argc, argv);
	if (!check_arg_input(argv) || !stack_a)
	{
		ft_free(&stack_a);
		ft_error();
	}
	if (!ft_checksorted(stack_a))
	{
		ft_sort(&stack_a);
	}
	ft_free(&stack_a);
	return (0);
}
