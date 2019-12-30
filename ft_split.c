/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 20:17:11 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/19 14:58:53 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_new(size_t size)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	while (size--)
		str[size] = '\0';
	return (str);
}

int			ft_count(char const *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			j++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (j);
}

static int	ft_len(char const *s, char c)
{
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

char		**ft_split(char const *s, char c)
{
	char	**new;
	int		i;
	int		j;
	int		k;

	if (!s || !(new = (char**)malloc(sizeof(*new) * (ft_count(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_count(s, c))
	{
		k = 0;
		if (!(new[i] = ft_new(ft_len(&s[j], c) + 1)))
			new[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			new[i][k++] = s[j++];
		new[i][k] = '\0';
		i++;
	}
	new[i] = 0;
	return (new);
}
