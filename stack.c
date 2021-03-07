/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:59:42 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 21:36:56 by roalvare         ###   ########.fr       */
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
		ft_putstr_fd(", ", 1);
	}
	ft_putstr_fd("\n", 1);
}

void	print_all_stack(t_game *game)
{
	int i;
	int max;

	i = -1;
	max = game->a.len;
	if (max < game->b.len)
		max = game->b.len;
	ft_putstr_fd("a b|\n----\n", 1);
	while (++i < max)
	{
		if (game->a.len < max - i)
			ft_putstr_fd(" ", 1);
		else
			ft_putnbr_fd(game->a.bottom[max - i - 1], 1);
		ft_putstr_fd(" ", 1);
		if (game->b.len < max - i)
			ft_putstr_fd(" ", 1);
		else
			ft_putnbr_fd(game->b.bottom[max - i - 1], 1);
		ft_putstr_fd("|\n", 1);
	}
	ft_putstr_fd("====\n", 1);
}

void	free_stack(t_stack *stack)
{
	free(stack->bottom);
}
