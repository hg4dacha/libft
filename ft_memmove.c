/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:35:06 by hgadacha          #+#    #+#             */
/*   Updated: 2019/08/05 16:51:56 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *srce;

	dest = (char*)dst;
	srce = (char*)src;
	if (dest > srce)
	{
		while (len > 0)
		{
			dest[len - 1] = srce[len - 1];
			len--;
		}
	}
	else
		while (len > 0)
		{
			*dest++ = *srce++;
			len--;
		}
	return (dest);
}
