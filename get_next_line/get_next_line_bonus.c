/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:18:00 by dtellez-          #+#    #+#             */
/*   Updated: 2019/12/22 13:16:20 by dtellez-         ###   ########.fr       */
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

int				get_next_line(int fd, char **line)
{
	char			buf[BUFFER_SIZE + 1];
	int				byte_was_read;
	static char		*line_stc[4096];
	char			*temp;

	if (fd < 0 || !line || BUFFER_SIZE < 1)
		return (-1);
	while ((byte_was_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[byte_was_read] = '\0';
		if (!line_stc[fd])
			line_stc[fd] = ft_strdup(buf);
		else
		{
			temp = ft_strjoin(line_stc[fd], buf);
			free(line_stc[fd]);
			line_stc[fd] = temp;
		}
		if (ft_strchr(line_stc[fd], '\n'))
			break ;
	}
	if (byte_was_read < 0)
		return (-1);
	else if (line_stc[fd] == NULL && byte_was_read == 0)
	{
		*line = ft_strdup("");
		return (0);
	}
	else
		return (save_line(&line_stc[fd], line));
}
