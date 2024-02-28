/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:19:05 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/25 02:05:26 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t	ft_line_count(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		i++;
	}
	return (i);
}

char	ft_strsplit(char **dst, const char *s, char c)
{
	
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s || c)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_line_count(s, c) + 1));
	if (!result)
		return (NULL);
