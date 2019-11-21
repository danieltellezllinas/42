/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 03:42:15 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/21 04:10:20 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		i;
	int		a;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	if (!(string = (char *)malloc((ft_strlen(s1) +
						ft_strlen(s2)) * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	a = 0;
	while (s2[a])
	{
		string[i] = s2[a];
		i++;
		a++;
	}
	string[i] = '\0';
	return (string);
}
