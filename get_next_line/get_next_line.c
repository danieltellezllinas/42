/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:18:00 by dtellez-          #+#    #+#             */
/*   Updated: 2019/12/10 20:06:00 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	char buf[10 + 1];
	//Con read lo que hago es leer el documento hasta llegar al número de buffer
	read(fd, buf, 10);
	//Le introduciremos un salto de línea porque sino se desbordará
	buf[10] = '\0';
	//Alocamos la memoria
	*line = ft_strdup(buf);
	return (0);
}

int		main(void)
{
	char	*line;
	int		fd;
	
	//El primer parámetro que introducimos a open es el archivo de texto a leer y esta función nos lo abrirá 
	//el sólo lectura (O_RDONLY);
	fd = open("text.txt", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);
}
