/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 13:37:07 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/17 18:05:38 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_printf
{
	va_list		ap;
	char		*fmt;
	int			len;
	int			w;
	int			p;
	int			len_swap;
	int			text_left;
	int			text_zero;
	int			now_break;
}				t_printf;

int				ft_printf(const char *fmt, ...);
void			ft_search(t_printf *e);
void			ft_printf_char(t_printf *e);
void			ft_printf_string(t_printf *e);
void			ft_printf_int(t_printf *e);
void			ft_printf_unsigned(t_printf *e);
void			ft_printf_number_hexadecimal(t_printf *e);
void			ft_printf_memory_direction(t_printf *e);
void			ft_printf_finalstring(char *c, t_printf *e);
void			ft_calculate_precision(t_printf *e);
void			ft_calculate_width(t_printf *e);
void			ft_swap(char *str, t_printf *e);
void			ft_reset_values(t_printf *e);
char			*ft_string_create(int size_str, char c, char *str);
void			ft_create_zero_and_space(char **str_aux, int size_str,
				char simbol, char **str);
void			ft_flags(t_printf *e);
#endif
