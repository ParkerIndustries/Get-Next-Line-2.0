/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:19:06 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 17:00:03 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nv;

	i = 0;
	nv = NULL;
	if (s && f)
	{
		nv = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
		if (!nv)
			return (NULL);
		ft_bzero(nv, ft_strlen(s) + 1);
		while (s[i])
		{
			nv[i] = f(i, s[i]);
			i++;
		}
		nv[i] = '\0';
	}
	return (nv);
}
