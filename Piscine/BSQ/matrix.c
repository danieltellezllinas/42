/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:24:34 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/23 20:24:36 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void matrix_declaration(void)
{
	int 	i;

	i = 0;
	data->matrix = malloc (data.pos_R_max * sizeof(*char);
	while(i < data->pos_R_max)
	{
		data->matrix[i] = malloc(data->pos_C_max * sizeof(*char));
		i++;
	}
}
