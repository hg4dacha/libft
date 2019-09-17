/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 13:13:50 by hgadacha          #+#    #+#             */
/*   Updated: 2019/07/03 10:40:27 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return (char*)(haystack);
	while (haystack[i] && needle[j] && i <= len)
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	if (needle[j] == '\0')
		return ((char*)haystack + (len - j));
	else
		return (NULL);
}
