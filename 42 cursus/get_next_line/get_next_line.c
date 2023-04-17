/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:02:43 by mcatalan          #+#    #+#             */
/*   Updated: 2023/04/13 11:18:06 by mcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*char	*read_file(int fd)
{
	int		fd;
	char	buffer;
	int		numbytes;

	while (numbytes > 0)
	{
		numbytes = read(fd, &buffer, sizeof(char));

	}
	
}*/

char	*get_next_line(int fd)
{
	char	*buffer;

	buffer = read_file(fd, buffer);
}

int	main(void)
{
	int	fd;

	fd = open("file1", O_RDONLY);
	get_next_line(fd);
	close(fd);
}
