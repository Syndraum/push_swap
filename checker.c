/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:52:14 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/08 19:52:21 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_command(char *line)
{
	int	max;

	max = ft_strlen(line);
	if (max < 3)
		max = 3;
	if (!ft_strncmp(line, "sa", max))
		return (0);
	if (!ft_strncmp(line, "sb", max))
		return (0);
	if (!ft_strncmp(line, "ss", max))
		return (0);
	if (!ft_strncmp(line, "pa", max))
		return (0);
	if (!ft_strncmp(line, "pb", max))
		return (0);
	if (!ft_strncmp(line, "ra", max))
		return (0);
	if (!ft_strncmp(line, "rb", max))
		return (0);
	if (!ft_strncmp(line, "rr", max))
		return (0);
	if (!ft_strncmp(line, "rra", max))
		return (0);
	if (!ft_strncmp(line, "rrb", max))
		return (0);
	if (!ft_strncmp(line, "rrr", max))
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
	char *line = NULL;
	while (0 < get_next_line(0, &line))
	{
		if (check_command(line))
		{
			ft_putstr_fd("Error\n", 2);
			break;
		}
	}
	
	free_stack(&game.a);
	free_stack(&game.b);
	return 0;
}
