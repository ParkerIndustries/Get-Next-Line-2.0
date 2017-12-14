/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:41:05 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 14:17:00 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			nega_pos;
	long long	res;

	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' && (nega_pos = -1))
		str++;
	else if ((nega_pos = 1) && *str == '+' && (str++))
		;
	if (!ft_isdigit(*str))
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str) && (str++))
			break ;
		if ((*str - '0') > 9)
			break ;
		res = (10 * res) + (*str - '0');
		if (res < 0)
			return (0);
		str++;
	}
	return (int)(nega_pos * res);
}
