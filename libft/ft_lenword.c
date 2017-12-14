/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 09:52:33 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/27 09:53:30 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_lenword(char const *s, char c)
{
	size_t len;
	size_t i;

	len = 0;
	i = 0;
	if (!s || !c)
		return (0);
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}
