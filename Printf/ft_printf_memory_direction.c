/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_memory_direction.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:28:18 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/17 17:46:47 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_memory_direction(t_printf *e)
{
	char	*c;
	char	*str_cpy;

	c = ft_convert_hex(va_arg(e->ap, unsigned long int));
	str_cpy = c;
	while (*c)
	{
		if (*c >= 'A' && *c <= 'F')
			*c += 32;
		c++;
	}
	c = ft_strjoin("0x", str_cpy);
	ft_printf_finalstring(c, e);
}
