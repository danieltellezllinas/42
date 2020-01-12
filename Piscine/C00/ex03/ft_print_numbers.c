/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 07:06:16 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/07 17:00:13 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char primer_numero;

	primer_numero = '0';
	while (primer_numero <= '9')
	{
		write(1, &primer_numero, 1);
		primer_numero++;
	}
}
