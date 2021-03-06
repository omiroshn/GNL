/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 21:10:13 by omiroshn          #+#    #+#             */
/*   Updated: 2017/11/26 17:55:41 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10
# include "libft/libft.h"
# include <fcntl.h>

typedef	struct	s_kek
{
	char		content[BUFF_SIZE + 1];
	size_t		size;
}				t_kek;

int				get_next_line(const int fd, char **line);

#endif
