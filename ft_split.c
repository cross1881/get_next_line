/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:19:05 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/04 12:43:06 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t	ft_line_count(const char *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s)
	{
		if (*s == C)
			word = 0;
		else if(!word)
		{
			word = 1;
			i++;
		}
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s || c)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_line_count(s, c) + 1));
	if (!result)
		return (NULL);
