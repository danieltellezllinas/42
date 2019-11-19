/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:14:26 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/19 20:07:28 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t a;

	a = 0;
	if (!dst || !src)
		return (0);
	while (src[a] != '\0' && dstsize > 1)
	{
		dst[a] = src[a];
		a++;
		dstsize--;
	}
	if (dstsize > 0)
		dst[a] = '\0';
	return (ft_strlen(src));
}
