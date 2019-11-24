/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:14:10 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/24 14:27:08 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_istrlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

static int		start(char const *s1, char const *set)
{
	int i;
	int a;

	i = 0;
	while (s1[i])
	{
		a = 0;
		while (set[a])
		{
			if (s1[i] == set[a])
				break ;
			a++;
		}
		if (set[a] == '\0')
			break ;
		i++;
	}
	return (i);
}

static int		end(char const *s1, char const *set)
{
	int i;
	int a;

	i = ft_istrlen(s1) - 1;
	while (i >= 0)
	{
		a = 0;
		while (set[a])
		{
			if (s1[i] == set[a])
				break ;
			a++;
		}
		if (set[a] == '\0')
			break ;
		i--;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	int		fstart;
	int		fend;
	int		i;

	if (s1 == 0 || set == 0)
		return (NULL);
	fstart = start(s1, set);
	fend = end(s1, set);
	if (fstart > fend)
		string = (char *)malloc(1 * sizeof(char));
	else if (!(string = (char *)malloc((fend - fstart + 2) * sizeof(char))))
		return (NULL);
	i = 0;
	while (fstart <= fend)
	{
		string[i] = s1[fstart];
		i++;
		fstart++;
	}
	string[i] = '\0';
	return (string);
}
