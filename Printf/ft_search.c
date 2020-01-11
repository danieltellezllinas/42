/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 17:38:51 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/11 04:57:48 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_search(t_printf *e)
{
	if (*e->fmt == 'c' || *e->fmt == '%')
		ft_printf_char(e);
	else if (*e->fmt == 's')
		ft_printf_string(e);
	else if (*e->fmt == 'i' || *e->fmt == 'd')
		ft_printf_int(e);
	else if (*e->fmt == 'u')
		ft_printf_unsigned(e);
	else if (*e->fmt == 'x' || *e->fmt == 'X')
		ft_printf_number_hexadecimal(e);
	else if (*e->fmt == 'p')
		ft_printf_memory_direction(e);
}
