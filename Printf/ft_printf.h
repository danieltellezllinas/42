/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 13:37:07 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/02 17:46:53 by dtellez-         ###   ########.fr       */
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
	va_list ap;
	char	*fmt;
}				t_printf;

int				ft_printf(const char *fmt, ...);
void			ft_search(t_printf *e);
#endif
