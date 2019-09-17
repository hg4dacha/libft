/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:55:21 by hgadacha          #+#    #+#             */
/*   Updated: 2019/08/05 16:47:31 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *restrict dst, const void *restrict src,
		size_t n)
{
	char		*dest;
	const char	*sour;
	size_t		i;
	size_t		j;

	dest = (char*)dst;
	sour = (char*)src;
	i = 0;
	j = 0;
	while (i < n)
	{
		dest[i] = sour[j];
		i++;
		j++;
	}
	return (dest);
}
