/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 19:41:48 by dtellez-          #+#    #+#             */
/*   Updated: 2019/12/10 19:53:09 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
#include <stdio.h>
#include <fcntl.h> // Esto nos permitirá usar la función open
#include <stdlib.h>
#include <unistd.h>

char		*ft_strdup(const char *s1);
size_t		ft_strlen(const char *s);
int			get_next_line(int fd, char **line);
#endif
