/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:06:19 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/19 17:36:27 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (s && n)
	{
		while (n)
		{
			if (*(unsigned char *)s == (unsigned char)c)
				return ((char *)s);
			n--;
			s++;
		}
	}
	return (NULL);
}
