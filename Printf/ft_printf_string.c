/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:25:42 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/20 13:51:40 by dtellez-         ###   ########.fr       */
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

	(is_negative == 1) ? *str = ft_strjoin("-", *str) : 0;
	size_str = e->w - e->p;
	(is_negative == 1) ? size_str -= 1 : 0;
	if (e->p < e->len_swap)
		*str = ft_substr(*str, 0, e->p);
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
	char	*str;
	int		is_negative;

	str_aux = 0;
	is_negative = 0;
	if (e->p == 0 && c == 0)
		str = ft_strdup("");
	else
		str = c;
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	ft_swap(str, e);
	ft_all_conditionals_string(e, str_aux, &str, is_negative);
	return (str);
}

void	ft_printf_string(t_printf *e)
{
	char	*c;

	c = va_arg(e->ap, char*);
	ft_printf_finalstring(ft_string_aux_string(c, e), e);
}
