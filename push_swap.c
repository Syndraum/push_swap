/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:49:39 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 20:37:32 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int argc, char *argv[])
{
	t_game	game;

	ft_bzero(&game, sizeof(t_game));
	check_arg(argc, argv, &game);
	print_stack(&game.a);
	free_stack(&game.a);
	free_stack(&game.b);
	return 0;
}
