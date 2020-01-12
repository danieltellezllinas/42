/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:18:00 by dtellez-          #+#    #+#             */
/*   Updated: 2019/12/27 17:07:22 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int		save_line(char **line_stc, char **line)
{
	int		i;
	char	*aux;

	i = 0;
	while ((*line_stc)[i] != '\n' && (*line_stc)[i] != '\0')
		i++;
	if ((*line_stc)[i] == '\n')
	{
		*line = ft_substr(*line_stc, 0, i);
		aux = ft_strdup(&((*line_stc)[i + 1]));
		free(*line_stc);
		*line_stc = aux;
	}
	else
	{
		*line = ft_strdup(*line_stc);
		free(*line_stc);
		*line_stc = NULL;
		return (0);
	}
	return (1);
}

int				ft_ret(t_global *x, char **line, int fd)
{
	if (x->byte_was_read < 0)
		return (-1);
	else if (x->line_stc[fd] == NULL && x->byte_was_read == 0)
	{
		*line = ft_strdup("");
		return (0);
	}
	return (save_line(&x->line_stc[fd], line));
}

int				get_next_line(int fd, char **line)
{
	static t_global x;

	if (fd < 0 || !line || BUFFER_SIZE < 1)
		return (-1);
	while ((x.byte_was_read = read(fd, x.buf, BUFFER_SIZE)) > 0)
	{
		x.buf[x.byte_was_read] = '\0';
		if (!x.line_stc[fd])
			x.line_stc[fd] = ft_strdup(x.buf);
		else
		{
			x.temp = ft_strjoin(x.line_stc[fd], x.buf);
			free(x.line_stc[fd]);
			x.line_stc[fd] = x.temp;
		}
		if (ft_strchr(x.line_stc[fd], '\n'))
			break ;
	}
	return (ft_ret(&x, line, fd));
}
