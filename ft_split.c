/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:19:05 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/04 14:19:15 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_count_word(const char *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s)
	{
		if (*s == c)
			word = 0;
		else if (!word)
		{
			word = 1;
			i++;
		}
		s++;
	}
	return (i);
}

char	*ft_word_len(char const *s, char c)
{
	s--;
	while (s)
	{
		s++;
		if (*s == c)
		{
			s++;
			return ((char *)s);
		}
	}
	return ((char *)s);
}

char	*ft_split_word(char **result, char const *s, char c)
{
	size_t	index;
	size_t	len;
	size_t	i;

	s = ft_word_len(s, c);
	index = 0;
	len = ft_count_word(s, c);
	result[index] = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[index][i] = *s;
		s++;
		i++;
	}
	result[index][len] = '\0';
	index++;
	result[index] = NULL;
	return ((char *)result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s || c)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!result)
		return (NULL);
	ft_split_word(result, s, c);
	return (result);
}
