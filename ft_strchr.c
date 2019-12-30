/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:10:27 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/09 15:27:07 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		index;

	index = 0;
	while (s[index])
	{
		if (c == s[index])
			return ((char*)&(s[index]));
		index++;
	}
	if (c == s[index])
		return ((char*)&(s[index]));
	return (NULL);
}
