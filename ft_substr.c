/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:42:24 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/19 15:11:43 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (s == NULL)
		return (NULL);
	new = (char*)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		new[0] = '\0';
		return (new);
	}
	while (((len - i) > 0) && s[start + i])
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
