/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_finalstring.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 19:03:08 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/02 19:24:04 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_finalstring(char *str, t_printf *e)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
		e->len++;
	}
}
