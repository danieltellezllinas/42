/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:21:12 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/24 15:17:24 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_string_create_char(int size_str, char c, char *str)
{
	char	*aux;

	if (str != NULL)
		free(str);
	if (!(str = (char *)malloc((size_str + 1) * sizeof(char))))
		return (NULL);
	str[size_str] = '\0';
	aux = str;
	while (size_str)
	{
		*str = c;
		str++;
		size_str--;
	}
	str = aux;
	return (str);
}

char	*ft_string_aux_char(t_printf *e, char c[2])
{
	char				*str_aux;
	int					size_str;
	char				*aux;

	aux = 0;
	str_aux = 0;
	size_str = (e->w == 0) ? ft_strlen(c) : e->w - 1;
	if (size_str > 0 && e->text_left == 0 && e->w >= 1 && e->text_zero == 0)
	{
		str_aux = ft_string_create_char(size_str, ' ', str_aux);
		aux = ft_strjoin(str_aux, c);
	}
	else if (size_str > 0 && e->text_zero == 1)
	{
		str_aux = ft_string_create(size_str, '0', str_aux);
		aux = ft_strjoin(str_aux, c);
	}
	else if (size_str > 0 && e->text_left == 1 && e->w >= 1)
	{
		str_aux = ft_string_create_char(size_str, ' ', str_aux);
		aux = ft_strjoin(c, str_aux);
	}
	else
		aux = c;
	return (aux);
}

void	ft_printf_char(t_printf *e)
{
	char				c[2];

	if (e->w < 0)
	{
		e->w = e->w * -1;
		e->text_left = 1;
	}
	if (*e->fmt == '%')
		c[0] = '%';
	else
		c[0] = va_arg(e->ap, int);
	c[1] = '\0';
	if (c[0] == '\0')
		e->c_null = 1;
	ft_printf_finalstring(ft_string_aux_char(e, c), e);
}
