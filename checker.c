/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:52:14 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/09 00:14:31 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_command(char *line)
{
	int	max;

	max = ft_strlen(line);
	if (max < 3)
		max = 3;
	if (!ft_strncmp(line, SWAP_A, max))
		return (0);
	if (!ft_strncmp(line, SWAP_B, max))
		return (0);
	if (!ft_strncmp(line, SWAP_S, max))
		return (0);
	if (!ft_strncmp(line, PUSH_A, max))
		return (0);
	if (!ft_strncmp(line, PUSH_B, max))
		return (0);
	if (!ft_strncmp(line, ROTATE_A, max))
		return (0);
	if (!ft_strncmp(line, ROTATE_B, max))
		return (0);
	if (!ft_strncmp(line, ROTATE_R, max))
		return (0);
	if (!ft_strncmp(line, REVERSE_ROTATE_A, max))
		return (0);
	if (!ft_strncmp(line, REVERSE_ROTATE_B, max))
		return (0);
	if (!ft_strncmp(line, REVERSE_ROTATE_R, max))
		return (0);
	return (1);
}

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
	print_all_stack(&game);
	init_game(&game);
	char *line = NULL;
	t_pointer f = NULL;
	while (0 < get_next_line(0, &line))
	{
		if (check_command(line))
		{
			ft_putstr_fd("Error\n", 2);
			break;
		}
		f = get_value_has_tab(line, (t_pointer*)game.tab_funtion);
		f(&game, NONE);
		free(line);
	}
	print_all_stack(&game);
	free_stack(&game.a);
	free_stack(&game.b);
	return 0;
}
