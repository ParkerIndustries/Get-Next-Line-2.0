/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 10:15:53 by xxxxxxxx          #+#    #+#             */
/*   Updated: 2018/01/19 17:07:48 by xxxxxxxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include “include/get_next_line.h"

int		main(int ac, char **av)
{
	char 	*line;
	int 	fd;
	int 	i = 0;

	if (ac > 0)
	{	
		fd = open(av[1], O_RDONLY);
		while (get_next_line(fd, &line))
		{
			printf(" ~ Ligne: %d ~ %s\n", i, line);
			i++;
		}
	}
	sleep(600000);
	return (0);
}
