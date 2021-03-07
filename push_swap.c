/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:49:39 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/08 00:12:16 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int argc, char *argv[])
{
	t_game	game;

	ft_bzero(&game, sizeof(t_game));
	if (check_arg(argc, argv, &game))
	{
		free_stack(&game.a);
		free_stack(&game.b);
		return (1);
	}
	free_stack(&game.a);
	free_stack(&game.b);
	return 0;
}
