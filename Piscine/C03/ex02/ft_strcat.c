/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:54:47 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/14 21:13:34 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int a;
	int e;

	a = 0;
	e = 0;
	while (dest[a] != '\0')
		a++;
	while (src[e] != '\0')
	{
		dest[a] = src[e];
		e++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
