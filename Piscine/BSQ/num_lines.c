/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_lines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:24:55 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/23 20:24:56 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	num_lines(void)
{
	int		i;
	int		a;
	char	swap;

	i = 0;
	a = 0;
	while (data->header[i])
		i++;
	i = i - 5;
	data->numb = (char*)malloc((int)*i);
	while (i >= 0)
		data->numb[a++] = data->header[i++];
	i = 0;
	while (i < a)
	{
		swap = data->numb[i];
		data->numb[i] = data->numb[a];
		data->numb[a] = swap;
		a--;
		i++;
	}
}
