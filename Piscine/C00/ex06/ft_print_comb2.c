/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 00:21:42 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/06 15:28:53 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribir(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int numero_uno;
	int numero_dos;

	numero_uno = -1;
	while (++numero_uno <= 98)
	{
		numero_dos = numero_uno;
		while (++numero_dos <= 99)
		{
			escribir((char)(numero_uno / 10) + '0');
			escribir((char)(numero_uno % 10) + '0');
			escribir(' ');
			escribir((char)(numero_dos / 10) + '0');
			escribir((char)(numero_dos % 10) + '0');
			if ((numero_uno != 98))
			{
				escribir(',');
				escribir(' ');
			}
		}
	}
}
