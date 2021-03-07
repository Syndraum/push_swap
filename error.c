/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:57:56 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 20:38:00 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/header.h"

int	check_arg(int ac, char *av[], t_game *game)
{
	int		i;
	int		j;
	long	tmp;

	if (ac < 2)
	{
		ft_putstr_fd("Error : No arguments specified\n", 2);
		return 1;
	}
	i = 0;
	while(++i < ac)
	{
		j = -1;

		while(av[i][++j])
		if (!ft_isdigit(av[i][j]))
		{
			ft_putstr_fd("Error : A argument is not a number\n", 2);
			return 2;
		}
		tmp = ft_atol(av[i]);
		if (tmp < INT_MIN || tmp > INT_MAX)
		{
			ft_putstr_fd("Error : A argument does not fit in a INT\n", 2);
			return 3;
		}
	}
	fill_stack(game, ac - 1, &av[1]);
	return 0;
}