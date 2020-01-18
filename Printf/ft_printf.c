/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 14:04:39 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/18 20:52:56 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_flags(t_printf *e)
{
	ft_reset_values(e);
	e->fmt++;
	if (*e->fmt == '0')
	{
		e->text_zero = 1;
		e->fmt++;
	}
	if (*e->fmt == '-')
	{
		e->text_zero = 0;
		e->text_left = 1;
		e->fmt++;
	}
	if ((ft_isdigit(*e->fmt) && *e->fmt != '0') || *e->fmt == '*')
		ft_calculate_width(e);
	if (*e->fmt == '.')
	{
		e->point = 1;
		e->text_zero = 0;
		ft_calculate_precision(e);
	}
	if (e->now_break == 0)
		ft_search(e);
	e->fmt++;
}

int		ft_printf(const char *fmt, ...)
{
	t_printf e;

	e.fmt = (char *)fmt;
	e.len = 0;
	va_start(e.ap, fmt);
	while (*e.fmt != '\0')
	{
		if (*e.fmt == '%')
			ft_flags(&e);
		else
		{
			write(1, e.fmt, 1);
			e.len++;
			e.fmt++;
		}
	}
	va_end(e.ap);
	return (e.len);
}
/*
int		main(void)
{
	int s;
	int x;
	int y;

	s = 0;
	x = 0;
	y = 0;
	x = printf("Printf ori:\n|%x|\n", s);
	printf("%d\n", x);
	y = ft_printf("Printf mio:\n|%x|\n", s);
	printf("%d\n\n", y);
}*/