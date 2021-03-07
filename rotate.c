/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:45:41 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 23:49:47 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rotate(t_stack *stack)
{
	int	i;
	int	tmp;
	int save;

	if (stack->len == 0)
		return ;
	i = -1;
	save = stack->bottom[0];
	while (++i < stack->len)
	{
		tmp = save;
		save = stack->bottom[(i + 1) % stack->len];
		stack->bottom[(i + 1) % stack->len] = tmp;
	}
}

void	rotate_all(t_game *game)
{
	rotate(&game->a);
	rotate(&game->b);
}

void	reverse_rotate(t_stack *stack)
{
	int	i;
	int	tmp;
	int save;

	if (stack->len == 0)
		return ;
	i = stack->len;
	save = stack->bottom[i - 1];
	while (--i >= 0)
	{
		tmp = save;
		save = stack->bottom[(i - 1 + stack->len) % stack->len];
		stack->bottom[(i - 1 + stack->len) % stack->len] = tmp;
	}
}

void	reverse_rotate_all(t_game *game)
{
	reverse_rotate(&game->a);
	reverse_rotate(&game->b);
}