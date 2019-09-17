/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 16:03:32 by hgadacha          #+#    #+#             */
/*   Updated: 2019/07/03 08:26:43 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	if (!*needle)
		return (char*)(haystack);
	while (haystack[i] && needle[j])
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
		return ((char*)haystack + (i - j));
	else
		return (NULL);
}
