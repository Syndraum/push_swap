/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:52:16 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/09 00:02:42 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		push(t_stack *dest, t_stack *src)
{
	if (src->len == 0)
		return (1);
	dest->bottom[dest->len] = src->bottom[src->len - 1];
	src->bottom[src->len - 1] = 0;
	(dest->len)++;
	(src->len)--;
	return (0);
}

void	push_a(t_game *game, int flag)
{
	push(&game->a, &game->b);
	if (flag == PRINT)
		ft_putstr_fd("pa\n", 1);
}

void	push_b(t_game *game, int flag)
{
	push(&game->b, &game->a);
	if (flag == PRINT)
		ft_putstr_fd("pb\n", 1);
}