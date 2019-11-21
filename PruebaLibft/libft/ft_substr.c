/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 09:25:57 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/21 02:57:58 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*string;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (!(string = (char *)malloc((sizeof(*s) * len) + 1)))
		return (NULL);
	ft_bzero(string, len);
	if (start > ft_strlen(s))
	{
		return (string);
	}
	while (len--)
	{
		string[i] = s[start];
		start++;
		i++;
	}
	string[i] = 0;
	return (string);
}
