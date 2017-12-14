/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:40:29 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/15 11:06:09 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	void	*r;

	r = dest;
	if (n)
	{
		while (*dest)
			dest++;
		while (n--)
		{
			if ((*dest = *src++) == 0)
				break ;
			dest++;
		}
		*dest = '\0';
	}
	return (r);
}
