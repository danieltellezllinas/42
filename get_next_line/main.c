/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 14:11:38 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/12/16 19:06:00 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int fd;
	int ret;
	int line;
	char *buff;
	int 	i;
	int	fd1;

	line = 0;
	if (argc > 1)
	{
		i = 0;
		while (++i < argc-1)
		{
			fd = open(argv[i], O_RDONLY);
			fd1 = open(argv[i+1], O_RDONLY);
			printf("%d- archivo: %s\n",i, argv[i]);
			printf("%d- archivo: %s\n", i + 1, argv[i+1]);
			while ((ret = get_next_line(fd, &buff)) > 0)
			{
				printf("[Return: %d] Line #%d: %s\n", ret, ++line, buff);
				free(buff);
				if ((ret = get_next_line(fd1, &buff)) > 0)
				{
					printf("[Return: %d] Line #%d: %s\n", ret, ++line, buff);
					free(buff);
				}
			}
			printf("[Return: %d] Line #%d: %s\n", ret, ++line, buff);
			if (ret == -1)
				printf("-----------\nError\n");
			else if (ret == 0)
				printf("-----------\nEnd of file\n");
			free(buff);
		}
	}
	if (argc == 1)
	{
		while ((ret = get_next_line(0, &buff)) > 0)
			printf("[Return: %d] Line #%d: %s\n", ret, ++line, buff);
		if (ret == -1)
			printf("-----------\nError\n");
		else if (ret == 0)
			printf("-----------\nEnd of stdin\n");
		free(buff);
		close(fd);
	}
	return (0);
}
