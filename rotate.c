/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:45:41 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 22:05:15 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rotate(t_stack * stack)
{
	int	i;
	int	tmp;
	int save;

	i = -1;
	if (stack->len == 0)
		return ;
	save = stack->bottom[i];
	while (++i < stack->len)
	{
		tmp = save;
		save = stack->bottom[(i + 1) % (stack->len - 1)];
		stack->bottom[(i + 1) % (stack->len - 1)] = tmp;
	}
}