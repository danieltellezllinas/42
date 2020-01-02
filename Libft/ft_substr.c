/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 23:32:08 by dtellez-          #+#    #+#             */
/*   Updated: 2019/12/01 16:58:49 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s || !(substr = (char *)malloc(sizeof(char) * ((int)len + 1))))
		return (NULL);
	ft_bzero(substr, len);
	if (start <= ft_strlen(s))
		ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
