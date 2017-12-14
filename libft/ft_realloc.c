/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 23:38:33 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/12/05 23:39:08 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;

	if (!ptr)
		return (ft_memalloc(size));
	if (!size)
	{
		free(ptr);
		return (NULL);
	}
	new = (void *)ft_memalloc(size);
	if (!new)
		return (NULL);
	new = ft_memcpy(new, ptr, size);
	free(ptr);
	return (new);
}
