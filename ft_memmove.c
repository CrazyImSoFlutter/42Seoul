/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 09:57:40 by hnoh              #+#    #+#             */
/*   Updated: 2021/01/04 10:00:36 by hnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	dest = (char*)dst;
	source = (char*)src;
	i = 0;
	if (dest > source)
	{
		while (len--)
			dest[len] = source[len];
	}
	else
		ft_memcpy(dest, source, len);
	return (dest);
}
