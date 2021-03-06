/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 03:46:38 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/27 19:16:56 by dtellez-         ###   ########.fr       */
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
	e->c_null = 0;
	e->str_cpy_hex = NULL;
	e->str_hex = NULL;
	e->point = 0;
	e->string = 0;
	e->i_is_zero = 0;
	e->w_is_negative = 0;
}
