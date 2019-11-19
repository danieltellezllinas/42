/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:43:39 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/19 13:31:01 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_reverse(char *n)
{
	char			aux[30];
	int				i;
	int				len;

	i = 0;
	len = ft_strlen(n) - 1;
	while (len >= 0)
	{
		aux[i] = n[len];
		i++;
		len--;
	}
	aux[i] = '\0';
	len = 0;
	while (aux[len])
	{
		n[len] = aux[len];
		len++;
	}
	return (n);
}

char		*ft_itoa(int n)
{
	char				*num;
	unsigned int		i;
	long int			n2;

	n2 = n;
	if (!(num = (char *)malloc(sizeof(char) * 30)))
		return (NULL);
	i = 0;
	if (n2 < 0)
		n2 *= (-1);
	while (n2 >= 10)
	{
		num[i] = (n2 % 10) + 48;
		n2 /= 10;
		i++;
	}
	num[i] = n2 + 48;
	i++;
	if (n < 0)
	{
		num[i] = '-';
		i++;
	}
	num[i] = '\0';
	return (ft_reverse(num));
}
