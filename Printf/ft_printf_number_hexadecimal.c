/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number_hexadecimal.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:27:44 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/10 20:38:38 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_number_hexadecimal(t_printf *e)
{
	unsigned int		i;
	char 	*str;

	i = va_arg(e->ap, unsigned int);
	str = ft_convert_hex(i);
	ft_printf_finalstring(str, e);
}
