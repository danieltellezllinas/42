/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 09:16:41 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/19 13:25:44 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (str1 == NULL && str2 == NULL)
	{
		return (dst);
	}
	while (n--)
		*str1++ = *str2++;
	return (dst);
}
