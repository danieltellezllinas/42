/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:25:24 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/23 20:25:26 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		str_to_int(void)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	while (data->header[i])
	{
		ret = 10 * ret;
		ret = ret + (data->header[i] - '0');
		i++;
	}
	data->pos_R_max = ret;
}
