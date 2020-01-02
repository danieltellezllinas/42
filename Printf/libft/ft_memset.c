/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:01:45 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/13 09:33:11 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				a;
	char			*pointer;
	unsigned int	x;

	a = 0;
	pointer = b;
	x = 0;
	while (x < len)
	{
		pointer[a] = c;
		x++;
		a++;
	}
	return (b);
}
