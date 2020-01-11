/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 13:37:07 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/11 05:18:34 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

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
void            ft_calculate_width(t_printf *e);
#endif
