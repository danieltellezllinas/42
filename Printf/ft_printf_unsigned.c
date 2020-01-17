/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:26:55 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/17 17:47:02 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_unsigned(t_printf *e)
{
	unsigned int		i;
	char				*str;

	i = (unsigned int)va_arg(e->ap, unsigned int);
	str = ft_itoa_unsigned(i);
	ft_printf_finalstring(str, e);
}
