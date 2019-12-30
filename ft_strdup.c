/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:47:53 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/19 13:05:37 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		index;
	int		length;
	char	*str;

	length = 0;
	while (s1[length])
		length++;
	str = (char*)malloc(sizeof(*str) * (length + 1));
	index = 0;
	if (str == NULL)
		return (NULL);
	while (index < length)
	{
		str[index] = s1[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
