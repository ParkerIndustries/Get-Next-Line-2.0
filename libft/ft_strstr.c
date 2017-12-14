/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:53:05 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 15:02:51 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;
	int find_size;

	i = 0;
	j = 0;
	find_size = 0;
	while (to_find[find_size])
		find_size++;
	if (find_size == 0)
		return ((char *)str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == find_size - 1)
				return ((char *)str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
