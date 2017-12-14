/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 09:04:56 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 16:11:30 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*nv;
	size_t	i;

	nv = NULL;
	i = 0;
	if (s)
	{
		nv = (char *)malloc((len + 1) * sizeof(char));
		if (!nv)
			return (NULL);
		while (s[start + i] && i < len)
		{
			nv[i] = s[start + i];
			i++;
		}
		nv[i] = '\0';
	}
	return (nv);
}
