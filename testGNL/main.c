/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 22:00:32 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/04 22:00:33 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int		fd1;
	int		fd2;
	int		fd3;
	int		fd4;
	char	*lol;

	fd1 = open("Vojna i mir. Tom 1.txt", O_RDONLY);
	fd2 = open("Vojna i mir. Tom 2.txt", O_RDONLY);
	fd3 = open("Vojna i mir. Tom 3.txt", O_RDONLY);
	fd4 = open("Vojna i mir. Tom 4.txt", O_RDONLY);
	while (get_next_line(fd1, &lol))
	{
		printf("%s\n", lol);
		free(lol);
	}
	while (get_next_line(fd2, &lol))
	{
		printf("%s\n", lol);
		free(lol);
	}
	while (get_next_line(fd3, &lol))
	{
		printf("%s\n", lol);
		free(lol);
	}
	while (get_next_line(fd4, &lol))
	{
		printf("%s\n", lol);
		free(lol);
	}
	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	return 0;
}