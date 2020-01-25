/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_memory_direction.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:28:18 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/25 14:02:32 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_string_create_memory(int size_str, char c, char *str)
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

void	ft_create_zero_and_space_memory(char **str_aux, int size_str,
		char simbol, char **str)
{
	*str_aux = ft_string_create_memory(size_str, simbol, *str_aux);
	*str = ft_strjoin(*str_aux, *str);
}

void	ft_all_conditionals_memory(t_printf *e, char *str_aux, char **str,
int is_negative)
{
	int size_str;

	is_negative = 0;
	is_negative++;
	e->w = e->w - 2;
	size_str = e->p - e->len_swap;
	if (size_str > 0)
		ft_create_zero_and_space_memory(&str_aux, size_str, '0', str);
	size_str = e->w - e->p;
	*str = ft_strjoin("0x", *str);
	if (size_str > 0 && e->text_left == 0 && e->text_zero == 0)
		ft_create_zero_and_space_memory(&str_aux, size_str, ' ', str);
	else if (size_str > 0 && e->text_left == 1)
	{
		str_aux = ft_string_create_memory(size_str, ' ', str_aux);
		*str = ft_strjoin(*str, str_aux);
	}
}

char	*ft_string_aux_memory(t_printf *e, unsigned long int i,
		char *str_aux, int is_negative)
{
	char	*str;

	i = va_arg(e->ap, unsigned long int);
	if (i == 0)
	{
		e->i_is_zero = 1;
		str = (!e->p) ? ft_strdup("0x") : ft_strdup("0x0");
		if (e->w > (int)ft_strlen(str))
		{
			str_aux = ft_string_create_memory(e->w - ft_strlen(str), ' ',
			str_aux);
			str = (e->text_left == 1) ? ft_strjoin(str, str_aux) :
			ft_strjoin(str_aux, str);
		}
	}
	else
	{
		str = ft_convert_hex(i);
		i = -1;
		while (str[++i])
			(str[i] >= 'A' && str[i] <= 'F') ? str[i] += 32 : str[i];
		ft_swap(str, e, is_negative);
		ft_all_conditionals_memory(e, str_aux, &str, is_negative);
	}
	return (str);
}

void	ft_printf_memory_direction(t_printf *e)
{
	unsigned long int		i;
	char					*str_aux;
	int						is_negative;

	e->w_is_negative = 0;
	if (e->w < 0)
	{
		e->w_is_negative = 1;
		e->w = e->w * -1;
		e->text_left = 1;
		e->text_zero = 0;
	}
	str_aux = 0;
	is_negative = 0;
	i = 0;
	ft_printf_finalstring(ft_string_aux_memory(e, i, str_aux, is_negative), e);
}
