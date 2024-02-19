/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:26:44 by mrossett          #+#    #+#             */
/*   Updated: 2024/02/19 17:40:32 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (del)(void *))
{
	t_list	*seclst;
	t_list	*newlist;

	if (!ist || !f || !del)
		return (NULL);
	seclst = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	while (lst)
	{
		newlist = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&seclist, newlist);
		lst = let->next;
	}
	return (seclst);
}
