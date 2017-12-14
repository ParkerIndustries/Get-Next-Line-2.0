/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:30:39 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 14:51:49 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ret;

	ret = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (ret)
	{
		i = 0;
		while (*s1)
			ret[i++] = *s1++;
		ret[i] = '\0';
		return (ret);
	}
	return (NULL);
}
