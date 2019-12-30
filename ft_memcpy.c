/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:02:58 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/13 15:43:19 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destp;
	unsigned char	*srcp;

	destp = (unsigned char *)dest;
	srcp = (unsigned char *)src;
	if (!n || dest == src)
		return (dest);
	while (n-- > 0)
		*(destp++) = *(srcp++);
	return (dest);
}
