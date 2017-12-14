/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:56:51 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 14:31:15 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if (!(list = (t_list*)malloc(sizeof(t_list)))
			|| (content && !(list->content = malloc(content_size))))
		return (NULL);
	list->content = content ?
			ft_memcpy(list->content, content, content_size) : NULL;
	list->content_size = content ? content_size : 0;
	list->next = NULL;
	return (list);
}
