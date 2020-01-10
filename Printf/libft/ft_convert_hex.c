/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 20:36:53 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/10 20:42:21 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*rev_string(char *aux, int i)
{
	int		j;
	char	*hex;

	if (!(hex = ft_calloc(i + 1, sizeof(char))))
		return (NULL);
	j = 0;
	while (i > 0)
		*(hex + j++) = *(aux + --i);
	free(aux);
	return (hex);
}

char	*ft_convert_hex(unsigned long int n)
{
	char			*aux;
	unsigned long	remainder;
	int				i;

	if (n == 0)
		return (ft_strdup("0"));
	if (!(aux = ft_calloc(17, sizeof(char))))
		return (NULL);
	i = 0;
	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			*(aux + i++) = 48 + remainder;
		else
			*(aux + i++) = 55 + remainder;
		n = n / 16;
	}
	return (rev_string(aux, i));
}
