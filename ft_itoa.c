/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:15:02 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/15 14:15:03 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_ncifre(int n)
{
    int i;

    i = 0;
    if (n < 0)
    {
        n *= -1;
        i++;
    }
    while(n > 10)
    {
        n /= 10;
        i++;
    }
    i++;
    return (i);
}
char    ft_conv(char *str, int n)
{
    if (n < 0)
    {
        str[0] = '-';
        n *= -1;
    }
    while(n > 10)
    {
        str += 48 + (n % 10);
        n /= 10;
    }
    str += 48 + (n % 10);
    return (str);
}
int *ft_itoa(int n)
{
    char    *str;
    int     len;

    if (n == -2147483648)
    {
        str = (char *)malloc(sizeof(char) * 12);
        if (!str)
            return (NULL);
        ft_strlcpy(str, "-2147483648", 12);
        return (str);
    }
    len = ft_ncifre(n);
    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (NULL);
    str = ft_conv(str, n);
    str[len] = '/0'; 
    return (str);
}

