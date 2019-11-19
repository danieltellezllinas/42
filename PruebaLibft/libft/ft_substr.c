/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:15:42 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/19 18:59:37 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*copie;

	if (*s == '\0' || len <= 0)
		return (NULL);
	copie = (char *)malloc(len + 1);
	if (copie == NULL)
		return (NULL);
	index = 0;
	while (index < start)
		if (*s != '\0')
			index++;
	if (index != start)
		return (NULL);
	index = 0;
	while (index < len)
	{
		*(copie + index) = *(s + start);
		index++;
		start++;
	}
	copie[index] = '\0';
	return (copie);
}
