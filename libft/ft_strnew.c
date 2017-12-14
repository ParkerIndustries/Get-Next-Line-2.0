/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:09:18 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2017/11/14 15:01:20 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	void	*frais;
	int		i;

	i = 0;
	frais = (void *)malloc(size + 1);
	if (frais == 0)
		return ((char *)frais);
	else
		ft_bzero(frais, size + 1);
	return ((char *)frais);
}
