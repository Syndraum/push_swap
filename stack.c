/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:59:42 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 20:42:25 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	fill_stack(t_game *game, int len, char	*tab[])
{
	int i;

	game->a.bottom = malloc(sizeof(int) * len);
	if (!game->a.bottom)
		return (1);
	game->b.bottom = malloc(sizeof(int) * len);
	if (!game->a.bottom)
		return (1);
	i = -1;
	while (++i < len)
		game->a.bottom[len - i - 1] = ft_atoi(tab[i]);
	game->a.len = len;
	game->a.size = len;
	game->b.len = 0;
	game->b.size = len;
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
