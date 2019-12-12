/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:18:00 by dtellez-          #+#    #+#             */
/*   Updated: 2019/12/12 18:46:50 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	char 	buf[10 + 1];
	//En esta variable amacenaremos los bytes que se han leído
	int		byte_was_read;

	//La función strnew nos creará un nuevo string el cual lo asignará con malloc 
	//y con la longitud introducida relleno de ceros.
	*line = ft_strnew(1);
	//Con read lo que hago es leer el documento hasta llegar al número de buffer
	//y nos devolverá un número
	while((byte_was_read = read(fd, buf, 10)))
	{
		if (ft_strchr(buf, '\n'))
		{
			break;
		}
		//Le introduciremos un salto de línea porque sino se desbordará
		buf[byte_was_read] = '\0';
		//Con strjoin iremos juntando los trozos(debido a que sólo podemos recorrer hasta el buffer) 
		//y los alocaremos en memoria
		*line = ft_strjoin(*line, buf);
	}
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
