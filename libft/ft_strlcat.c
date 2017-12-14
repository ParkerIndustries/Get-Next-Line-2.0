/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:35:51 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 14:54:40 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (dlen >= n)
		return (n + slen);
	i += dlen;
	dest = &dest[dlen];
	while (*src && i < (n - 1))
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (dlen + slen);
}
