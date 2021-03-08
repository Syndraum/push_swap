/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 00:30:05 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/09 00:37:12 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_sort(t_stack *stack)
{
	int top;
	int i;
	
	if (stack->len == 0)
		return (-1);
	top = stack->bottom[stack->len - 1];
	i = 0;
	while (++i < stack->len)
	{
		if (stack->bottom[stack->len - i - 1] < top)
			return (-1);
		top = stack->bottom[stack->len - i - 1];
	}
	return (0);
}