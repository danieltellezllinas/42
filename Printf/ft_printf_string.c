/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:25:42 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/07 20:15:54 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_string(t_printf *e)
{
	char	*c;

	c = va_arg(e->ap, char *);
	ft_printf_finalstring(c, e);
}
