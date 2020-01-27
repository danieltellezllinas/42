/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:25:42 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/25 14:22:56 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_string_create_s(int size_str, char c, char *str)
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

void	ft_all_conditionals_string(t_printf *e, char *str_aux, char **str,
int is_negative)
{
	int size_str;

	if (e->p < 0)
		e->p = 0;
	size_str = e->w - e->len_swap;
	(is_negative == 1) ? size_str -= 1 : 0;
	if (e->string == 1)
	{
		*str = ft_substr(*str, 0, e->len_swap);
	}
	if (size_str > 0 && e->text_left == 0)
	{
		str_aux = ft_string_create_s(size_str, ' ', str_aux);
		*str = ft_strjoin(str_aux, *str);
	}
	else if (size_str > 0 && e->text_left == 1)
	{
		str_aux = ft_string_create_s(size_str, ' ', str_aux);
		*str = ft_strjoin(*str, str_aux);
	}
}

char	*ft_string_aux_string(char *c, t_printf *e)
{
	char	*str_aux;
	int		is_negative;

	str_aux = 0;
	is_negative = 0;
	if (c == NULL)
		c = ft_strdup("(null)");
	if (*c == '-')
	{
		is_negative = 1;
		c++;
	}
	ft_swap(c, e, is_negative);
	ft_all_conditionals_string(e, str_aux, &c, is_negative);
	return (c);
}

void	ft_printf_string(t_printf *e)
{
	char	*c;

	if (e->w < 0)
	{
		e->w = e->w * -1;
		e->text_left = 1;
		e->text_zero = 0;
	}
	e->string = 1;
	c = va_arg(e->ap, char*);
	ft_printf_finalstring(ft_string_aux_string(c, e), e);
}
