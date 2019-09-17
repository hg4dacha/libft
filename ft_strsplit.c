/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 17:42:49 by hgadacha          #+#    #+#             */
/*   Updated: 2019/08/14 15:49:04 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	ft_count_words(char const *str, char c)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
			while (str[i] == c)
				i++;
		while (str[i] != c && str[i])
			i++;
		j++;
	}
	return (j);
}

static inline void	ft_count_chars(char const *str, char c, int j,
					int k, char **tbl)
{
	int				i;
	int				l;

	i = 0;
	l = 0;
	while (str && str[i] && j < k)
	{
		if (str[i] == c)
			while (str[i] == c)
				i++;
		else
			while (str[i] != c && str[i])
			{
				i++;
				l++;
			}
		if (!(tbl[j] = (char*)malloc(sizeof(char*) * (l + 1))))
			return ;
		l = 0;
		j++;
	}
}

static inline void	ft_fill(char const *str, char c, char **tbl)
{
	int				i;
	int				j;
	int				k;

	i = 0;
	j = 0;
	k = 0;
	while (str && str[i])
	{
		if (str[i] == c)
			while (str[i] == c)
				i++;
		while (str[i] && str[i] != c)
		{
			tbl[j][k] = str[i];
			i++;
			k++;
		}
		tbl[j][k] = '\0';
		k = 0;
		j++;
	}
	tbl[j] = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nb_words;
	int		j;

	tab = NULL;
	nb_words = ft_count_words(s, c);
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char**) * (nb_words + 1))))
		return (NULL);
	ft_count_chars(s, c, j, nb_words, tab);
	ft_fill(s, c, tab);
	return (tab);

