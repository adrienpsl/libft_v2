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

void ft_putnstr_fd(char const *str, size_t len, int fd)
{
	write(fd, str, len);
}

void ft_putnstr(char const *str, size_t str_len)
{
	ft_putnstr_fd(str, str_len, STDOUT_FILENO);
}

void ft_putstr_buffer(const char *s, char *buffer)
{
	int i;

	i = 0;
	while (s[i])
	{
		buffer[i] = s[i];
		i++;
	}
}

void ft_putstr_fd(char const *s, int fd)
{
	size_t size;
	if (g_test)
	{
		size = ft_strlen(g_test_buffer);
		ft_putstr_buffer(s, g_test_buffer + size);
	}
	else
		write(fd, s, strlen(s));
}

void ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}
