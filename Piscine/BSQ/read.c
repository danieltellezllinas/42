/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:25:11 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/23 20:25:12 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	read(void)
{
	int		i;
	char	byte;
	int		comprobation;
	int		fd;

	i = 0;
	fd = 0;
	comprobation = open("tablero.dict", O_RDONLY);
	if (comprobation < 0)
	{
		write(1, "Tab open error\n", 14);
		return (0);
	}
	else
		open("tablero.txt", O_RDONLY);
	byte = '1';
	while (byte != 0)
	{
		byte = read(fd, byte, 1);
		i++;
	}
	data->buffer = (char*)malloc(sizeof(char) * i);
	byte = read(fd, data->buffer, 1);
	data->buffer[i] = 0;
	close(fd);
}
