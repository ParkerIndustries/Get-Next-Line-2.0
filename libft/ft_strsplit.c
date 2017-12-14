/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:04:31 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/15 10:59:53 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char			*ft_split(const char **s, char c)
{
	char			*str;
	unsigned int	i;

	i = 0;
	while (**s == c)
		++*s;
	while ((*s)[i] && (*s)[i] != c)
		++i;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while ((*s)[i] && (*s)[i] != c)
	{
		str[i] = (*s)[i];
		i++;
	}
	*s += i;
	str[i] = '\0';
	return (str);
}

char				**ft_strsplit(char const *s, char c)
{
	int				i;
	int				j;
	char			**str;

	i = 0;
	j = 0;
	if (!s || !*s)
	{
		str = s ? (char **)malloc(sizeof(char *)) : NULL;
		s ? str[0] = 0 : NULL;
		return (str);
	}
	while (s[i])
	{
		j += (s[i] == c && i && s[i - 1] != c);
		i++;
	}
	j += s[i - 1] != c;
	if (!(str = (char **)malloc(sizeof(char *) * (j + 1))))
		return (NULL);
	i = 0;
	while (i != j)
		str[i++] = ft_split(&s, c);
	str[i] = NULL;
	return (str);
}
