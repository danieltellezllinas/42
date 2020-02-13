/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 09:24:56 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/19 11:41:14 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	if (src < dst)
		while (len--)
			*(unsigned char*)(dst + len) = *(unsigned char*)(src + len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
