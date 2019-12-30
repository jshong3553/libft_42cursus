/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 20:42:37 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/19 13:08:38 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	j = ft_strlen(s1);
	while (j >= i && ft_strchr(set, s1[j]) != NULL)
		j--;
	str = (char*)malloc(sizeof(char) * (j - i + 2));
	if (str == NULL)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
