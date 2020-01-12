/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 19:25:25 by dtellez-          #+#    #+#             */
/*   Updated: 2020/01/10 19:02:26 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_negative(int *n, int *digits, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*digits = *digits + 1;
		*neg = 1;
	}
}

char		*ft_itoa(int n)
{
	int		digits;
	int		num;
	char	*str;
	int		neg;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = n;
	digits = 2;
	ft_negative(&n, &digits, &neg);
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
