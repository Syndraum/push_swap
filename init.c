/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:19:03 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/08 23:28:57 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	init_game(t_game *game)
{
	set_value_hash_tab("sa", game->tab_funtion, swap_a);
	set_value_hash_tab("sb", game->tab_funtion, swap_b);
	set_value_hash_tab("ss", game->tab_funtion, swap_all);
	set_value_hash_tab("pa", game->tab_funtion, push_a);
	set_value_hash_tab("pb", game->tab_funtion, push_b);
	set_value_hash_tab("ra", game->tab_funtion, rotate_a);
	set_value_hash_tab("rb", game->tab_funtion, rotate_b);
	set_value_hash_tab("rr", game->tab_funtion, rotate_all);
	set_value_hash_tab("rra", game->tab_funtion, reverse_rotate_a);
	set_value_hash_tab("rrb", game->tab_funtion, reverse_rotate_b);
	set_value_hash_tab("rrr", game->tab_funtion, reverse_rotate_all);
}
	