/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 09:20:13 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 14:53:48 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nv;
	size_t	lensrc;
	size_t	lendst;

	nv = NULL;
	if (s1 && s2)
	{
		lensrc = ft_strlen(s1);
		lendst = ft_strlen(s2);
		nv = (char *)malloc((lensrc + lendst + 1) * sizeof(char));
		if (!nv)
			return (NULL);
		ft_bzero(nv, lensrc + lendst + 1);
		nv = ft_strcat(nv, s1);
		ft_strcat(&nv[lensrc], s2);
	}
	return (nv);
}
