/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:20:10 by jinhong           #+#    #+#             */
/*   Updated: 2019/11/13 15:46:29 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*destp;
	unsigned char	*srcp;

	destp = (unsigned char *)dest;
	srcp = (unsigned char *)src;
	if (srcp < destp)
		while (len--)
			destp[len] = srcp[len];
	else
		ft_memcpy(destp, srcp, len);
	return (dest);
}
