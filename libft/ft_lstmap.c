/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 11:34:51 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 14:28:34 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*sv;
	t_list	*nv;

	if (!lst)
		return (NULL);
	nv = (t_list *)malloc(sizeof(struct s_list));
	nv = (*f)(lst);
	sv = nv;
	lst = lst->next;
	while (lst)
	{
		if (!(nv->next = f(lst)))
		{
			free(nv->next);
			nv->next = NULL;
			return (sv);
		}
		nv = nv->next;
		lst = lst->next;
	}
	return (sv);
}
