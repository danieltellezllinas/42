/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:21:12 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/17 17:44:27 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_char(t_printf *e)
{
	char	c[2];

	if (*e->fmt == '%')
		c[0] = '%';
	else
		c[0] = (char)va_arg(e->ap, int);
	c[1] = '\0';
	ft_printf_finalstring(c, e);
}
