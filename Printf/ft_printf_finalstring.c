/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_finalstring.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 19:03:08 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/19 19:29:07 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_swap(char *str, t_printf *e)
{
	if (e->p == 0 && *str == '0')
		e->len_swap = 0;
	else
		e->len_swap = ft_strlen(str);
	if (e->p < e->len_swap)
		e->p = e->len_swap;
	if (e->w < e->p)
		e->w = e->p;
}

void	ft_printf_finalstring(char *str, t_printf *e)
{
	if (e->c_null == 1 && e->text_left == 1)
	{
		write(1, "\0", 1);
		e->len++;
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
		e->len++;
	}
	if (e->c_null == 1 && e->text_left == 0)
	{
		write(1, "\0", 1);
		e->len++;
	}
}
