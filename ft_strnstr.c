/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:12:36 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/13 15:33:27 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)hay);
	while (i < len && hay[i])
	{
		j = 0;
		while (needle[j])
		{
			if (i + j >= len || hay[i + j] != needle[j])
				break ;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)(hay + i));
		i++;
	}
	return (0);
}
