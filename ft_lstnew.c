/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:19:36 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/19 12:58:10 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if ((new = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	new->content = (void*)content;
	new->next = NULL;
	return (new);
}
