/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 14:04:39 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/02 17:36:21 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *fmt, ...)
{
	t_printf e;
	e.fmt = (char *)fmt;

	va_start(e.ap, fmt);
	while (*e.fmt != '\0')
	{
		if (*e.fmt == '%')
		{
			e.fmt++;
			ft_search(e);
		}	
		else
			write (1, e.fmt, 1);
		e.fmt++;
	}
	return (0);
}

int		main()
{
	ft_printf("Ho%la");
}
