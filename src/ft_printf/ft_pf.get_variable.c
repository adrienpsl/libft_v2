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

int is_format(t_pf *pf, int position)
{
	int res = (*(int *)&pf->format_bit & (1 << position)) ? 1 : 0;
	return res;
}

//long long addaptateur(void *nb)
//{
//
//}


int ft_pf_get_variable(t_pf *s)
{
	int neg = 0;
	//	static char bases[4][17] =
	//		{ "01", "0123456789", "0123456789abcdef", "0123456789ABCDF" };
	unsigned long long u_nb = 0;
	long long nb = 0;
	int base;

	if (0 == is_format(s, UNSIGNED))
	{
		if (1 == is_format(s, TALL))
			nb = va_arg(s->list, long);
		else
			nb = va_arg(s->list, int);
		if (nb < 0)
		{
			neg = 1;
			nb *= -1;
			u_nb = nb;
		}
	}
	else
		u_nb = va_arg(s->list, unsigned long long);
	// je sinon je prend tout !
	base = (s->format & FORMAT_10_BASE) ? 1 : 2;
	//	return ft_itoa_base(nb,
	//						bases[base],
	//						s->string,
	//						s->format & FORMAT_U);
	return (0);
}

