/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:38:43 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/29 11:57:07 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 
	if (!str)
		return (NULL);
	while ((*s >= 9 && *s <= 13) || *s == 32 || *s == *set)
		s++;
 	while (!((*s >= 9 && *s <= 13) || *s == 32 || *s == *set))
	{
		*str = *s1;
		str++;
		s1++;
	}
	return (str);
}
	
