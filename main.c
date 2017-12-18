/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 22:18:13 by omiroshn          #+#    #+#             */
/*   Updated: 2017/11/26 15:40:13 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		fd2;
	char	*lol;

	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	while ((get_next_line(fd, &lol)) > 0)
	{
		printf("%s\n", lol);
		free(lol);
		if ((get_next_line(fd2, &lol)) > 0)
		{
			printf("%s\n", lol);
			free(lol);
		}
	}
	return (1);
}
