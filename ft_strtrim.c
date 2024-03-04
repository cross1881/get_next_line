/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:38:43 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/04 15:06:43 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		len;

	len = 0;
	while ((*s1 >= 9 && *s1 <= 13) || *s1 == 32 || *s1 == *set)
		s1++;
	while (!((*s1 >= 9 && *s1 <= 13) || *s1 == 32 || *s1 == *set))
		len++;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	s1 -= len;
	while (!((*s1 >= 9 && *s1 <= 13) || *s1 == 32 || *s1 == *set))
	{
		*str = *s1;
		str++;
		s1++;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}
