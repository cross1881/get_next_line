/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:59:24 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/16 12:28:32 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt;

	while (*lst)
	{
		nxt = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = nxt;
	}
}
