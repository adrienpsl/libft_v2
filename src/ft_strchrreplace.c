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

#include "libft.h"

void ft_strchrreplace(char *str, char matched, char replacing)
{
	while (*str)
	{
		if (*str == matched)
			*str = replacing;
		str++;
	}
}

void ft_strchrnreplace(char *str, char matched, char replacing, size_t size)
{
	while (*str && size)
	{
		if (*str == matched)
			*str = replacing;
		str++;
		size--;
	}
}