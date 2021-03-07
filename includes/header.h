/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:34:44 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 23:49:30 by roalvare         ###   ########.fr       */
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


int		check_arg(int ac, char *av[], t_game *game);
int		as_doublon(t_stack *stack);
int		fill_stack(t_game *game, int len, char	*tab[]);
void	print_stack(t_stack *stack);
void	print_all_stack(t_game *game);
void	free_stack(t_stack *stack);
void	swap_top(t_stack *stack);
void	swap_top_all(t_game *game);
int		push(t_stack *dest, t_stack *src);
void	rotate(t_stack *stack);
void	rotate_all(t_game *game);
void	reverse_rotate(t_stack *stack);
void	reverse_rotate_all(t_game *game);

#endif