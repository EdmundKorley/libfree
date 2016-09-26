/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 20:18:17 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/26 04:57:19 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char const *s, char c)
{
	size_t		word;
	size_t		i;

	i = 0;
	word = 0;
	if (s[i] && (s[i] != c) && (s[i + 1] != c) && (s[i + 1] != 0))
		word++;
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != 0))
			word++;
		i++;
	}
	return (word);
}

int		ft_splitstr(char **tab, const char *s, char c, size_t len)
{
	size_t		count;
	size_t		wordlen;
	size_t		i;

	count = 0;
	i = 0;
	while (count < len)
	{
		wordlen = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			wordlen++;
			i++;
		}
		if ((tab[count] = ft_strsub(&s[i - wordlen], 0, wordlen)) == NULL)
			return (0);
		count++;
	}
	tab[count] = 0;
	return (1);
}

char	**ft_strsplit(char const *s, char c)
{
	char		**words;
	int			len;

	if (!s)
		return (NULL);
	len = ft_wordcount(s, c);
	if ((words = ((char **)ft_memalloc(sizeof(char *) * len + 1))) == NULL)
		return (NULL);
	if (ft_splitstr(words, s, c, len))
		return (words);
	else
	{
		ft_memdel((void **)words);
	}
	return (words);
}
