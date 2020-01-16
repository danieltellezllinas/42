/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:26:20 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/16 15:32:02 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_string_create(int size_str, char c, char *str)
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

void	ft_all_conditionals(t_printf *e, char *str_aux, char **str,
int is_negative)
{
	int size_str;

	size_str = e->p - e->len_swap;
	if (size_str > 0)
	{
		str_aux = ft_string_create(size_str, '0', str_aux);
		*str = ft_strjoin(str_aux, *str);
	}
	(is_negative == 1) ? *str = ft_strjoin("-", *str) : 0;
	size_str = e->w - e->p;
	if (size_str > 0 && e->text_left == 0 && e->text_zero == 0)
	{
		str_aux = ft_string_create(size_str, ' ', str_aux);
		*str = ft_strjoin(str_aux, *str);
	}
	else if (size_str > 0 && e->text_zero == 1)
	{
		str_aux = ft_string_create(size_str, '0', str_aux);
		*str = ft_strjoin(str_aux, *str);
	}
	else if (size_str > 0 && e->text_left == 1)
	{
		str_aux = ft_string_create(size_str, ' ', str_aux);
		*str = ft_strjoin(*str, str_aux);
	}
}

char	*ft_string_aux(t_printf *e)
{
	int		i;
	char	*str_aux;
	char	*str;
	int		is_negative;

	str_aux = 0;
	is_negative = 0;
	i = va_arg(e->ap, int);
	str = ft_itoa(i);
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	ft_swap(str, e);
	ft_all_conditionals(e, str_aux, &str, is_negative);
	return (str);
}

void	ft_printf_int(t_printf *e)
{
	ft_printf_finalstring(ft_string_aux(e), e);
}
