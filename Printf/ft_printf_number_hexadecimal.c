/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number_hexadecimal.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:27:44 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/10 21:18:47 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_number_hexadecimal(t_printf *e)
{
	unsigned int		i;
	char 	*str;
	char	*str_cpy;

	i = va_arg(e->ap, unsigned int);
	str = ft_convert_hex(i);
	str_cpy = str;
	if(*e->fmt == 'X')
		ft_printf_finalstring(str, e);
	else
	{
		while (*str)
		{
			if (*str >= 'A' && *str <= 'F')
				*str += 32;
			str++;
		}
		str = str_cpy;
		ft_printf_finalstring(str, e);
	}
}
