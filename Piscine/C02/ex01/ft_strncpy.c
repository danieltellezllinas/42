/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 08:05:43 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/15 16:31:26 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n && src[i])
	{
		dest[i] = src[i];
		++i;
		--n;
	}
	if ((src[i] == 0) && (n > 0))
	{
		dest[i] = '\0';
		++i;
		--n;
	}
	while (n != 0)
	{
		dest[i] = '\0';
		++i;
		--n;
	}
	return (dest);
}
