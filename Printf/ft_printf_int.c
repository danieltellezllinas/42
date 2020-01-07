/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:26:20 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/07 20:49:56 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_int(t_printf *e)
{
	int		i;
	char 	*str;

	i = va_arg(e->ap, int);
	str = ft_itoa(i);
	ft_printf_finalstring(str, e);
}
