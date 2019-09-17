/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 19:31:00 by hgadacha          #+#    #+#             */
/*   Updated: 2019/08/05 16:32:33 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	char		*dest;
	const char	*sour;
	size_t		i;

	dest = (char*)dst;
	sour = (char*)src;
	i = 0;
	while (i < n && sour[i] != (unsigned char)c)
	{
		dest[i] = sour[i];
		i++;
	}
	if (sour[i] == (unsigned char)c)
	{
		dest[i] = sour[i];
		i++;
		return (dest + i);
	}
	return (NULL);
}
