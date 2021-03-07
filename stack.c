/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:59:42 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 20:34:32 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	fill_stack(t_stack *stack, int len, char	*tab[])
{
	int i;

	stack->bottom = malloc(sizeof(int) * len);
	if (!stack->bottom)
		return (1);
	i = -1;
	while (++i < len)
	{
		stack->bottom[len - i - 1] = ft_atoi(tab[i]);
	}
	stack->len = len;
	stack->size = len;
	return 0;
}

void	print_stack(t_stack *stack)
{
	int i;

	i = -1;
	while (++i < stack->len)
	{
		ft_putnbr_fd(stack->bottom[stack->len - i - 1], 1);
		ft_putstr_fd("\n", 1);
	}
	
}

void	free_stack(t_stack *stack)
{
	free(stack->bottom);
}
