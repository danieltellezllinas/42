/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:26:20 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/11 20:11:13 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_string_create(int size_str, char c)
{
	char	*str;
	char	*aux;

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

char	*ft_string_aux(t_printf *e)
{
	int		i;
	char 	*str;
	int		size_str;
	char	*str_aux;
	char	*str_join;

	i = va_arg(e->ap, int);
	str = ft_itoa(i);
	ft_swap(str, e);

	size_str = e->p - e->len_swap;
	if (size_str > 0)
		str_aux = ft_string_create(size_str, '0');
	str_join = ft_strjoin(str_aux, str);
	if (size_str > 0)
		free(str_aux);
	size_str = e->w - e->p;
	if (size_str > 0)
		str_aux = ft_string_create(size_str, ' ');
	str_join = ft_strjoin(str_aux, str_join);	
	return str_join;	
}

void	ft_printf_int(t_printf *e)
{
	ft_printf_finalstring(ft_string_aux(e), e);
}
