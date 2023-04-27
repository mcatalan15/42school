/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:02:43 by mcatalan          #+#    #+#             */
/*   Updated: 2023/04/27 11:38:19 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *str)
{
	char	*buffer;
	int		nbytes;

	buffer = malloc((BUFF_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	nbytes = 1;

	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;

	if (fd > 0 || BUFF_SIZE <= 0)
		return (0);
	str = read_file(fd, str);
	while ()
}

int	main(void)
{
	int	fd;

	fd = open("file1", O_RDONLY);
	get_next_line(fd);
	close(fd);
}
