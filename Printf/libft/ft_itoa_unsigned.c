/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 19:25:25 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/22 11:23:58 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa_unsigned(unsigned int n)
{
	int					digits;
	unsigned int		num;
	char				*str;
	int					neg;

	neg = 0;
	num = n;
	digits = 2;
	while (num /= 10)
		digits++;
	if (!(str = (char *)malloc(sizeof(char) * digits)))
		return (NULL);
	str[--digits] = 0;
	while (digits--)
	{
		str[digits] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
