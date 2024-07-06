/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallawa <oallawa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:02:56 by oallawa           #+#    #+#             */
/*   Updated: 2024/07/06 17:21:30 by oallawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	error_syntax(char *str_n)
{
	if (!(*str_n == '+' || *str_n == '-' || (str_n >= '0' && str_n <= '9')))
		return (1);
	if (*str_n == '+' || *str_n == '-' && !(str_n[1] >= '0' && str_n[1] <= '9'))
		return (1);
	while (*str_n++)
	{
		if (!(*str_n >= '0' && *str_n <= '9'))
			return (1);
	}
	return (0);
}

int	error_duplicate(t_stack_node *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->nbr == n)
			return (1);
		a = a->next;
	}
	return (0);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*current;

	if (!stack)
		return ;
	current = stack;
	while (current)
	{
		tmp = current->next;
		current = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free_errors(t_stack_node **stack)
{
	free_stack(stack);
	ft_printf("Error");
	exit(1);
}
