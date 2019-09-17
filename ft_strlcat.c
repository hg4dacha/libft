/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:07:29 by hgadacha          #+#    #+#             */
/*   Updated: 2019/08/05 17:06:25 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst, const char *restrict src,
		size_t size)
{
	size_t	len;

	len = ft_strlen(dst);
	if (len >= size)
		return (size + ft_strlen(src));
	strncat(dst, src, size - len - 1);
	return (len + ft_strlen(src));
}
