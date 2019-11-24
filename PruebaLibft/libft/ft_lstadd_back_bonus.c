/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 21:21:17 by dtellez-          #+#    #+#             */
/*   Updated: 2019/11/24 21:33:25 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *list;
	
	if (alst != NULL)
	{
		list = *alst;
		if (*alst == NULL)
			*alst = new;
		else
		{
			while(list->next)
				list = list->next;
			list->next = new;
		}
	}
}
