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

int ft_str_search(char *str, char *searching)
{
	int i;
	int y;

	if (!str || !searching)
		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == searching[0])
		{
			y = 1;
			while (str[i + y] && searching[y]
				   && str[i + y] == searching[y])
				y++;
			if (searching[y] == 0)
				return (i);
		}
		i++;
	}
	return (-1);
}

char *ft_str_replace(char *str, char *searching, char *replacing, int do_free)
{
	ssize_t match_i;
	size_t searching_size;
	char *out;

	if (!str || !searching || !replacing)
		return (NULL);
	match_i = ft_str_search(str, searching);
	if (match_i > -1)
	{
		searching_size = ft_strlen(searching);
		if (!(out = ft_strnew(ft_strlen(str) -
							  (searching_size - ft_strlen(replacing)))))
			return (NULL);
		ft_memcpy(out, str, match_i);
		ft_strcat(out, replacing);
		ft_strcat(out, str + match_i + searching_size);
		if (do_free & FREE_FIRST)
			free(str);
		if (do_free & FREE_SECOND)
			free(searching);
		if (do_free & FREE_THIRD)
			free(replacing);
		return (out);
	}
	return (NULL);
}

char *
ft_str_replacebuffer(char *out, char *str, char *searching, char *replacing)
{
	ssize_t match_i;

	if (!str || !searching || !replacing)
		return (NULL);
	match_i = ft_str_search(str, searching);
	if (match_i > -1)
	{
		ft_memcpy(out, str, match_i);
		ft_strcat(out, replacing);
		ft_strcat(out, str + match_i + ft_strlen(searching));
		return (out);
	}
	return (NULL);
}
