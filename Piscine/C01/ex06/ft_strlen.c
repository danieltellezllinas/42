/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:03:22 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/08 23:02:13 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int contador;

	contador = 0;
	while (str[contador] > 0)
	{
		contador++;
	}
	return (contador);
}
