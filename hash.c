/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 22:12:51 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/08 23:55:23 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		hash(char *str)
{
	int i;
	int	index;

	i = 0;
	index = 0;
	while (str[i])
	{
		if (!ft_strncmp("rrr", &str[i], 3))
		{
			index += 8;
			i +=3;
		}
		else if (!ft_strncmp("rr", &str[i], 2))
		{
			index += 5;
			i += 2;
		}
		else
		{
			if (!ft_strncmp("s", &str[i], 1))
				index += 0;
			else if (!ft_strncmp("a", &str[i], 1))
				index += 1;
			else if (!ft_strncmp("b", &str[i], 1))
				index += 2;
			else if (!ft_strncmp("r", &str[i], 1))
				index += 2;
			else if (!ft_strncmp("p", &str[i], 1))
				index += 8;
			i++;
		}
	}
	return (index);
}

void	set_value_hash_tab(char * index, void *tab, t_pointer f)
{
	t_pointer *cast = tab;
	cast[hash(index)] = f;
}

t_pointer	get_value_has_tab(char * index, t_pointer *tab)
{
	return (tab[hash(index)]);
}