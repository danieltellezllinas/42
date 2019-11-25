/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 21:41:15 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/25 21:41:19 by dtellez-         ###   ########.fr       */
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
	char	*set;

	set = (char*)s2;
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1);
	while (ft_clean(s1[i], set))
		i++;
	while (len > 0 && ft_clean(s1[len - 1], set))
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
