/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:18:00 by dtellez-          #+#    #+#             */
/*   Updated: 2019/12/16 19:03:42 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*save_line(char *buf, char *line)
{
	char 	*devl;
	char 	*aux;
	int 	i;
	char	*aux_two;
	char	*temp;

	aux = ft_strchr(buf, '\n');
	if (!(aux_two = malloc(ft_strlen(buf) - ft_strlen(aux) + 1)))
		return (NULL);
	i = 0;
	while (buf[i] && buf[i] != '\n')
	{
		aux_two[i] = buf[i];
		i++;
	}
	aux_two[i] = '\0';
	temp = ft_strjoin(line, aux_two);
	free(line);
	line = ft_strdup(temp);
	free(temp);
	devl = ft_strdup(&aux[1]);
	free(aux_two);
	return (devl);
}

int				get_next_line(int fd, char **line)
{
	char 	*buf;
	//En esta variable amacenaremos los bytes que se han leído
	int		byte_was_read;
	static char		*line_stc;
	char			*temp;
	//La función strnew nos creará un nuevo string el cual lo asignará con malloc 
	//y con la longitud introducida relleno de ceros.
	//ft_strdup(line_stc);
	//Con read lo que hago es leer el documento hasta llegar al número de buffer
	//y nos devolverá un número
	if(!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	if(line_stc == NULL)
		line_stc = ft_strdup("");
	*line = ft_strdup(line_stc);
	free(line_stc);
	while((byte_was_read = read(fd, buf, 10)))
	{
		if (ft_strchr(buf, '\n'))
		{
			line_stc = save_line(buf, *line);
			free(buf);
			return (1);
		}
		//Le introduciremos un salto de línea porque sino se desbordará
		buf[byte_was_read] = '\0';
		//Con strjoin iremos juntando los trozos(debido a que sólo podemos recorrer hasta el buffer) 
		//y los alocaremos en memoria
		temp = ft_strjoin(*line, buf);
		free(*line);
		*line = ft_strdup(temp);
		free(temp);
	}
	buf[byte_was_read] = '\0';
	temp = ft_strjoin(*line, buf);
	free(*line);
	*line = ft_strdup(temp);
	free(temp);
	free(buf);
	line_stc = NULL;
	return (0);
}
