/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:45:41 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 22:50:04 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rotate(t_stack * stack)
{
	int	i;
	int	tmp;
	int save;

	if (stack->len == 0)
		return ;
	i = -1;
	save = stack->bottom[0];
	while (++i < stack->len)
	{
		tmp = save;
		save = stack->bottom[(i + 1) % stack->len];
		stack->bottom[(i + 1) % stack->len] = tmp;
	}
}