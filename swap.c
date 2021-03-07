/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:44:01 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 23:49:35 by roalvare         ###   ########.fr       */
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

void	swap_top_all(t_game *game)
{
	swap_top(&game->a);
	swap_top(&game->b);
}