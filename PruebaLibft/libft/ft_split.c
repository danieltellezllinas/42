/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 14:26:20 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/24 14:26:23 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**alloc_words(char *str, char c)
{
	int		c_w;
	int		i;
	char	**split;

	c_w = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c && str[i] != 0)
		{
			if (i == 0)
				;
			else if (str[i - 1] != c)
				c_w++;
		}
		i++;
	}
	if (str[i] == 0 && str[i - 1] != c && i != 0)
		c_w++;
	if (!(split = ft_calloc(sizeof(char*), c_w + 1)))
		return (NULL);
	return (split);
}

static void		bucle(char *str, char c, char **split)
{
	int		i;
	int		n;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		n = 0;
		while (str[i] == c)
			i++;
		while (str[i + n] != c && str[i + n])
			n++;
		if (str[i])
		{
			split[j] = ft_substr(str, i, n);
			j++;
		}
		i += n;
	}
}

char			**ft_split(char const *s, char c)
{
	char	*str;
	char	**split;

	if (!s || !c)
		return (NULL);
	if (!*s)
		return (split = ft_calloc(sizeof(char*), 1));
	str = (char*)s;
	if (!(split = alloc_words(str, c)))
		return (NULL);
	bucle(str, c, split);
	return (split);
}
