/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:57:56 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 23:55:43 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/header.h"

int	check_arg(int ac, char *av[], t_game *game)
{
	int		i;
	int		j;
	long	tmp;

	if (ac < 2)
		return (1);
	i = 0;
	while(++i < ac)
	{
		j = -1;

		while(av[i][++j])
		{
			if (!ft_isdigit(av[i][j]))
			{
				ft_putstr_fd("Error\n", 2);
				return (2);
			}
		}
		if (av[i][0] == 0)
		{
			ft_putstr_fd("Error\n", 2);
			return (2);
		}
		tmp = ft_atol(av[i]);
		if (tmp < INT_MIN || tmp > INT_MAX)
		{
			ft_putstr_fd("Error\n", 2);
			return (3);
		}
	}
	fill_stack(game, ac - 1, &av[1]);
	if (as_doublon(&game->a))
	{
		ft_putstr_fd("Error\n", 2);
		return (4);
	}
	return (0);
}

int		as_doublon(t_stack *stack)
{
	int	i;
	int	j;

	i = -1;
	while (++i < stack->len)
	{
		j = i;
		while (++j < stack->len)
		{
			if (stack->bottom[i] == stack->bottom[j])
				return (1);
		}
	}
	return (0);
}