/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 14:04:39 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/16 16:49:42 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *fmt, ...)
{
	t_printf e;

	e.fmt = (char *)fmt;
	e.len = 0;
	va_start(e.ap, fmt);
	while (*e.fmt != '\0')
	{
		if (*e.fmt == '%')
		{
			ft_reset_values(&e);
			e.fmt++;
			if (*e.fmt == '-')
			{
				e.text_left = 1;
				e.fmt++;
			}
			if (*e.fmt == '0')
			{
				if (e.text_left == 0)
					e.text_zero = 1;
				e.fmt++;
			}
			if ((ft_isdigit(*e.fmt) && *e.fmt != '0') || *e.fmt == '*')
				ft_calculate_width(&e);
			if (*e.fmt == '.')
			{
				e.text_zero = 0;
				ft_calculate_precision(&e);
			}
			ft_search(&e);
			e.fmt++;
		}
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

	s = -14;
	x = 0;
	y = 0;
	x = printf("Printf ori:\n|%7d|\n", s);
	printf("%d\n", x);
	y = ft_printf("Printf mio:\n|%7d|\n", s);
	printf("%d\n\n", y);
}
*/