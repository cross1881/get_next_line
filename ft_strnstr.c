/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:09:36 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/04 11:21:30 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!small)
		return (big);
	while (big)
	{
		j = 0;
		if ((i + j) < len)
		{
			while (big[i + j] == small[j])
			{
				if (!small[j + 1])
					return (big[i]);
				j++;
			}
			i++;
		}
	}
	return (NULL);
}
