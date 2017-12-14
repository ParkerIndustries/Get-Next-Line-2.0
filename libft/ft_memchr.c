/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:21:19 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 14:33:43 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	if (n)
	{
		while (n--)
		{
			if (*(unsigned char *)src++ == (unsigned char)c)
				return ((void *)src - 1);
		}
	}
	return (NULL);
}
