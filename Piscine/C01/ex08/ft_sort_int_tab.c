/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:46:56 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/11 12:55:35 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int numero;
	int j;
	int a;

	j = 0;
	a = size - 1;
	while (size > 1)
	{
		a = size - 1;
		while (j < a)
		{
			if (tab[a] < tab[a - 1])
			{
				numero = tab[a];
				tab[a] = tab[a - 1];
				tab[a - 1] = numero;
			}
			a--;
		}
		size--;
	}
}
