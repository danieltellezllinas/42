/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:11:23 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/11 12:56:02 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int contador_incremento;
	int temporal;

	contador_incremento = 0;
	while (contador_incremento < (size / 2))
	{
		temporal = tab[contador_incremento];
		tab[contador_incremento] = tab[size - contador_incremento - 1];
		tab[size - contador_incremento - 1] = temporal;
		contador_incremento++;
	}
}
