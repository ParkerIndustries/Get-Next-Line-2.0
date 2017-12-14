/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:26:30 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/15 12:06:38 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strpbrk(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (*s1)
	{
		while (i < ft_strlen(s2))
		{
			if (s2[i] == *s1)
				return ((char *)s1);
			i++;
		}
		i = 0;
	}
	return (NULL);
}
