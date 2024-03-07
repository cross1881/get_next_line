/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:19:05 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/07 12:53:25 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_fill_split(char **substring, const char *s, char c)
{
	char	*str;
	size_t	i;
	size_t	index;
	size_t	start;

	start = 0;
	index = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != c || s[i])
		{
			i++;
			if (s[i] == c || i == ft_strlen(s))
				str = (char *)malloc(sizeof(char) * (i - start + 1));
			if (!str)
				return (NULL);
			while (++start < i)
				str[start] = s[start];
			str[start] = '\0';
			substring[index++] = str;
		}
	}
	substring[index] = NULL;
	return (substring);
}

char	**split(const char *s, char c)
{
	int		len;
	int		nstring;
	int		i;
	char	**substring;

	nstring = 0;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		if (s[i] == c)
			nstring++;
		i++;
	}
	substring = malloc(sizeof(char *) * (nstring + 2));
	if (!substring)
		return (NULL);
	ft_fill_split(substring, s, c);
	return (substring);
}
