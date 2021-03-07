/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:34:44 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 20:50:20 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "libft.h"
# include <limits.h>

typedef struct	s_stack
{
	int			*bottom;
	int			size;
	int			len;
}				t_stack;

typedef struct	s_game
{
	t_stack		a;
	t_stack		b;
}				t_game;


int	check_arg(int ac, char *av[], t_game *game);
int	fill_stack(t_game *game, int len, char	*tab[]);
void	print_stack(t_stack *stack);
void	free_stack(t_stack *stack);
int		swap_top(t_stack * stack);

#endif