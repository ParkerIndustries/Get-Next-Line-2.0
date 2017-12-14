/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:11:33 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 16:18:50 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	if (n)
	{
		while (n--)
		{
			while ((*(unsigned char *)dest++ = *(unsigned char *)src++)
					== (unsigned char)c)
				return (dest);
		}
	}
	return (0);
}
