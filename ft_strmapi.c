/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:31:02 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/19 13:08:05 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_malloc(size_t size)
{
	void	*m;

	if (!(m = malloc(size)))
		return (NULL);
	ft_bzero(m, size);
	return (m);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*new;
	unsigned int	index;

	index = 0;
	str = (char *)s;
	if (str && f)
	{
		if (!(new = ft_malloc(ft_strlen(str) + 1)))
			return (NULL);
		while (str[index])
		{
			new[index] = (*f)(index, str[index]);
			index++;
		}
		new[index] = '\0';
		return (new);
	}
	return (NULL);
}
