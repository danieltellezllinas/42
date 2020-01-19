/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 03:46:38 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/19 18:11:32 by dtellez-         ###   ########.fr       */
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

void	ft_calculate_precision(t_printf *e)
{
	e->fmt++;
	if (*e->fmt == '*')
		e->p = va_arg(e->ap, int);
	else
	{
		e->p = ft_atoi(e->fmt);
	}
	while (ft_isdigit(*e->fmt) || *e->fmt == '*')
		e->fmt++;
}

void	ft_reset_values(t_printf *e)
{
	e->w = 0;
	e->p = -1;
	e->text_left = 0;
	e->len_swap = 0;
	e->text_zero = 0;
	e->now_break = 0;
}
