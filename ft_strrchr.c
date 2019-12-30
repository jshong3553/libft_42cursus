/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:20:55 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/13 15:34:09 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;

	index = ft_strlen(s);
	index++;
	while (index--)
	{
		if (c == s[index])
			return ((char*)&(s[index]));
	}
	return (NULL);
}
