/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:44:01 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/08 00:32:48 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	swap_top(t_stack *stack)
{
	int	tmp;
	int	top_id;

	if (stack->len < 2)
		return ;
	top_id = stack->len - 1;
	tmp = stack->bottom[top_id];
	stack->bottom[top_id] = stack->bottom[top_id - 1];
	stack->bottom[top_id - 1] = tmp;
}

void	swap_a(t_game *game, int flag)
{
	swap_top(&game->a);
	if (flag == PRINT)
		ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_game *game, int flag)
{
	swap_top(&game->b);
	if (flag == PRINT)
		ft_putstr_fd("sb\n", 1);
}

void	swap_all(t_game *game, int flag)
{
	swap_top(&game->a);
	swap_top(&game->b);
	if (flag == PRINT)
		ft_putstr_fd("ss\n", 1);
}