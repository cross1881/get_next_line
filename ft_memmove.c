/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:28:11 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/19 19:24:45 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int	dstlen;

	dstlen = strlen(dst);
	if (dst && src)
	{
		while (n)
		{
			*(char *)dst[dstlen + n] = *(char *)src[n];
			n--;
		}
		return (dst);
	}
	return (NULL);
}
