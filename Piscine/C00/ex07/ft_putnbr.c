/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 04:37:17 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/07 17:02:22 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int numero)
{
	if (numero == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (numero < 0)
	{
		ft_putchar('-');
		ft_putnbr(numero * (-1));
	}
	else
	{
		if (numero >= 10)
			ft_putnbr(numero / 10);
        ft_putchar((numero%10) +  '0');
	}
}
