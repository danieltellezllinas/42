/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 19:41:48 by dtellez-          #+#    #+#             */
/*   Updated: 2019/12/27 17:08:47 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

typedef struct		s_global {
	char			buf[BUFFER_SIZE + 1];
	int				byte_was_read;
	char			*line_stc[4096];
	char			*temp;
}					t_global;

char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *s);
char				*ft_strjoin(char const *s1, char const *s2);
int					get_next_line(int fd, char **line);
char				*ft_strchr(const char *s, int c);
char				*ft_substr(char *s, size_t start, size_t len);
#endif
