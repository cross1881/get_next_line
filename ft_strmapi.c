/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:58:33 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/04 15:04:15 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (!str)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(i,((char *)s)[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
