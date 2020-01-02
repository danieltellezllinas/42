/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:21:12 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/02 19:26:28 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void            ft_printf_char(t_printf *e)
{
	char	c[2];

	c[0] = (char)va_arg(e->ap, int);
	c[1] = '\0';
	ft_printf_finalstring(c, e);
}
