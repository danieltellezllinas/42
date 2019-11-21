/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 09:25:57 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/21 02:32:25 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *string;
	unsigned int i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		return (NULL);
	}
	i = 0;
	if (!(string = (char *)malloc((sizeof(*s) * len) + 1)))
		return (NULL);
	while (len--)
	{
		string[i] = s[start];
		start++;
		i++;
	}
	string[i] = 0;
	return (string);
}
