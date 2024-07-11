/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:13:08 by oallawa           #+#    #+#             */
/*   Updated: 2024/07/11 14:54:16 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	if (stack_len(*a) > 3 && !stack_sorted(*a))
		pb(b, a, false);
	if (stack_len(*a) > 3 && !stack_sorted(*a))
		pb(b, a, false);
	while (stack_len(*a) > 3 && !stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(*a, b);
	}
}
