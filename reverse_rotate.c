/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 00:34:40 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/08 00:37:46 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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

void	reverse_rotate_a(t_game *game, int flag)
{
	reverse_rotate(&game->a);
	if (flag == PRINT)
		ft_putstr_fd("rra", 1);
}

void	reverse_rotate_b(t_game *game, int flag)
{
	reverse_rotate(&game->b);
	if (flag == PRINT)
		ft_putstr_fd("rrb", 1);
}

void	reverse_rotate_all(t_game *game, int flag)
{
	reverse_rotate(&game->a);
	reverse_rotate(&game->b);
	if (flag == PRINT)
		ft_putstr_fd("rrr", 1);
	
}