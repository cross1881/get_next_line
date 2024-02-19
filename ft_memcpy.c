/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:30:05 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/19 18:11:25 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (dst && src)
	{
		while (n)
		{
			*(char *)dst[n] = *(char *)src[n];
			n--;
		}
		return (dst);
	}
	return (NULL);
}
