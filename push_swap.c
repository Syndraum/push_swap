/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:49:39 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 23:21:43 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int argc, char *argv[])
{
	t_game	game;

	ft_bzero(&game, sizeof(t_game));
	if (check_arg(argc, argv, &game))
		return (1);
	// print_all_stack(&game);
	swap_top(&game.a);
	// print_all_stack(&game);
	push(&game.b, &game.a);
	print_all_stack(&game);
	rotate(&game.a);
	print_all_stack(&game);
	reverse_rotate(&game.a);
	print_all_stack(&game);
	reverse_rotate(&game.b);
	print_all_stack(&game);
	free_stack(&game.a);
	free_stack(&game.b);
	return 0;
}
