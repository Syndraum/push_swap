/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:05:45 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 22:11:26 by roalvare         ###   ########.fr       */
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
	save = stack->bottom[i];
	while (--i >= 0)
	{
		tmp = save;
		save = stack->bottom[(i - 1 + stack->len - 1) % (stack->len - 1)];
		stack->bottom[(i - 1 + stack->len - 1) % (stack->len - 1)] = tmp;
	}
}