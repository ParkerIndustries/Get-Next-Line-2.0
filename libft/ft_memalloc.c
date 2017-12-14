/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:37:18 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 14:31:50 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*mem;
	int		i;

	i = 0;
	mem = (void *)malloc(size);
	if (mem)
		ft_memset(mem, 0, size);
	return (mem);
}
