/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 03:46:38 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/11 05:48:57 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_calculate_width(t_printf *e)
{
	if (*e->fmt == '*')
		e->w = va_arg(e->ap, int);
	else
		e->w = ft_atoi(e->fmt);
	while (ft_isdigit(*e->fmt) || *e->fmt == '*')
		e->fmt++;
}
