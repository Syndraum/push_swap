/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:05:45 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 22:53:04 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	reverse_rotate(t_stack * stack)
{
	int	i;
	int	tmp;
	int save;

	if (stack->len == 0)
		return ;
	i = stack->len;
	save = stack->bottom[i - 1];
	while (--i >= 0)
	{
		tmp = save;
		save = stack->bottom[(i - 1 + stack->len) % stack->len];
		stack->bottom[(i - 1 + stack->len) % stack->len] = tmp;
	}
}