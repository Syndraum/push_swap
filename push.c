/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roalvare <roalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:52:16 by roalvare          #+#    #+#             */
/*   Updated: 2021/03/07 21:43:36 by roalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	push(t_stack *dest, t_stack *src)
{
	if (src->len == 0)
		return (1);
	dest->bottom[dest->len] = src->bottom[src->len - 1];
	src->bottom[src->len - 1] = 0;
	(dest->len)++;
	(src->len)--;
	return (0);
}