/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:21:07 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/19 17:18:11 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (alst == NULL || new == NULL)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	ft_lstlast(*alst)->next = new;
}
