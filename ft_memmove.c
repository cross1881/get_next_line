/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:28:11 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/04 14:51:24 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		dstlen;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	dstlen = strlen(dst);
	if (dst && src)
	{
		while (n)
		{
			d[dstlen + n] = s[n];
			n--;
		}
		return (dst);
	}
	return (NULL);
}
