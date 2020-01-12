/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:24:21 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/23 20:24:23 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	create_header(void)
{
	int		i;
	int		j;
	char 	*header;

	i = 0;
	j = 0;
	while (data->buffer[i++] != '\n')
	data->header = (char*)malloc(sizeof(char) * i);
	while (j < i)
	{
		data->header[j] = data->buffer[j];
		j++;
	}
}
