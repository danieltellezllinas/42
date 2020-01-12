/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 19:25:36 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/24 19:25:37 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*aux;

	i = 1;
	if (s && f)
	{
		i += ft_strlen(s);
		if (!(aux = (char*)malloc(sizeof(char) * i)))
			return (NULL);
		i = 0;
		while (s[i])
		{
			aux[i] = (char)s[i];
			i++;
		}
		aux[i] = 0;
		i = 0;
		while (aux[i])
		{
			aux[i] = f(i, aux[i]);
			i++;
		}
		return (aux);
	}
	return (NULL);
}
