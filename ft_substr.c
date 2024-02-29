/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:37:31 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/29 11:21:18 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*estract;
	size_t	slen;

	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	str += start;
	if (len > slen)
		len = slen;
	estract = (char *)malloc(sizeof(char) * len + 1);
	if (!estract)
		return (NULL);
	ft_strlcpy(estract, s, len + 1);
	return (estract);
}
