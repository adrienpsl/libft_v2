/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpusel <adpusel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 10:48:07 by adpusel           #+#    #+#             */
/*   Updated: 2017/11/16 12:45:50 by adpusel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

void *ft_array_prev_infinite(t_array *array)
{
	array->i =
	(array->i - 1 < 0) ?
	array->length : array->i - 1;

	return (ft_array_position(array, array->i));
}

void *ft_array_prev(t_array *array)
{
	if (array->i - 1 < 0)
		return (NULL);
	return (ft_array_position(array, array->i));
}