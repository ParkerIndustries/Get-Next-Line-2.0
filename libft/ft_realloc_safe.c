/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_safe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 23:06:38 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/12/05 23:08:31 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_realloc_safe(void *src, size_t old_size, size_t new_size)
{
	void	*new;

	if (!src)
		return (ft_memalloc(new_size));
	if (!new_size)
	{
		free(src);
		return (NULL);
	}
	new = (void *)ft_memalloc(new_size);
	if (!new)
		return (NULL);
	new = ft_memcpy(new, src, old_size);
	ft_bzero(new + old_size, new_size - old_size);
	free(src);
	return (new);
}
