/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:34:44 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/09 00:38:05 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "libft.h"
# include <limits.h>

# define SWAP_A "sa" //= 1
# define SWAP_B "sb" //= 2
# define SWAP_S "ss" //= 0
# define PUSH_A "pa" //= 9
# define PUSH_B "pb" //= 10
# define ROTATE_A "ra" //= 3
# define ROTATE_B "rb" //= 4
# define ROTATE_R "rr" //= 5
# define REVERSE_ROTATE_A "rra" //= 6
# define REVERSE_ROTATE_B "rrb" //= 7
# define REVERSE_ROTATE_R "rrr" //= 8

typedef enum	e_flag_print
{
	NONE,
	PRINT
}				t_flag_print;

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
	void *tab_funtion[11];
}				t_game;

typedef void (*t_pointer)(t_game*, int);

int		check_arg(int ac, char *av[], t_game *game);
int		as_doublon(t_stack *stack);
int		fill_stack(t_game *game, int len, char	*tab[]);
void	print_stack(t_stack *stack);
void	print_all_stack(t_game *game);
void	free_stack(t_stack *stack);
void	init_game(t_game *game);
int		is_sort(t_stack *stack);

void	swap_a(t_game *game, int flag);
void	swap_b(t_game *game, int flag);
void	swap_all(t_game *game, int flag);
void	push_a(t_game *game, int flag);
void	push_b(t_game *game, int flag);
void	rotate_a(t_game *game, int flag);
void	rotate_b(t_game *game, int flag);
void	rotate_all(t_game *game, int flag);
void	reverse_rotate_a(t_game *game, int flag);
void	reverse_rotate_b(t_game *game, int flag);
void	reverse_rotate_all(t_game *game, int flag);

int			hash(char *str);
void		set_value_hash_tab(char * index, void *tab, t_pointer f);
t_pointer	get_value_hash_tab(char * index, t_pointer *tab);


#endif