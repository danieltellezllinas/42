/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 21:41:15 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/27 00:44:13 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_clean(char c, char *set)
{
	size_t		i;
	size_t		lenset;

	i = 0;
	lenset = ft_strlen(set);
	while (i < lenset)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*strtrim;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1);
	while (ft_clean(s1[i], (char*)s2))
		i++;
	if (i == len)
		return (ft_strdup(""));
	while (len > 0 && ft_clean(s1[len - 1], (char*)s2))
		len--;
	if (len < i)
		len = i;
	if (!(strtrim = (char *)malloc(sizeof(char) * (len - i + 1))))
		return (0);
	while (i < len)
		strtrim[j++] = (char)s1[i++];
	strtrim[j] = 0;
	return (strtrim);
}
