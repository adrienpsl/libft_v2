/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sll_construct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpusel <adpusel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 10:48:07 by adpusel           #+#    #+#             */
/*   Updated: 2018/05/04 16:43:59 by adpusel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_HEADER_H
# define PRINTF_HEADER_H

# include <stdio.h>

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>
# include <cxxabi.h>
#include "libft_define.h"

# define FORMAT_S (1)
# define FORMAT_D (1 << 1)
# define FORMAT_C (1 << 2)
# define FORMAT_U (1 << 3)
# define FORMAT_H (1 << 4)
# define FORMAT_L (1 << 5)
# define FORMAT_PADDING (1 << 6)
# define FORMAT_MINUS (1 << 7)
# define FORMAT_WILDCARD (1 << 8)
# define FORMAT_X (1 << 9)
# define FORMAT_0 (1 << 10)
# define FORMAT_10_BASE (FORMAT_H | FORMAT_L | FORMAT_D | FORMAT_C | FORMAT_U)

/*
**	error
*/
#define FT_PRINTF_PARCING_ERROR 100
#define FT_PRINTF_PARCING_ERROR_STRING "ft_printf error %[ unknown ]"

typedef struct s_pf
{
	int i;
	int min_length;
	char *str;
	void *ptr;
	long format;
	char t_string[64];
	va_list list;
	t_buffer *buff;
} t_pf;


int ft_sprintf(t_buffer *buffer, char *format, ...);
int ft_printf(char *format, ...);

#endif