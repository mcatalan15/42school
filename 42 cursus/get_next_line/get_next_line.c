/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:02:43 by mcatalan          #+#    #+#             */
/*   Updated: 2023/06/28 20:21:41 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*clean_storage(char *str)
{
	char	*n_str;
	char	*ptr;
	int		len;

	ptr = ft_strchr(str, '\n');
	if (!ptr)
	{
		n_str = NULL;
		return (ft_free(&str));
	}
	else
		len = (ptr - str) + 1;
	if (!str[len])
		return (ft_free(&str));
	n_str = ft_substr(str, len, ft_strlen(str) - len);
	ft_free(&str);
	if (!n_str)
		return (NULL);
	return (n_str);
}

char	*new_line(char *str)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(str, '\n');
	len = (ptr - str) + 1;
	line = ft_substr(str, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*readbuf(int fd, char *str)
{
	int		rid;
	char	*buffer;

	rid = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (ft_free(&str));
	buffer[0] = '\0';
	while (rid > 0 && !ft_strchr(buffer, '\n'))
	{
		rid = read(fd, buffer, BUFFER_SIZE);
		if (rid > 0)
		{
			buffer[rid] = '\0';
			str = ft_strjoin(str, buffer);
		}
	}
	free(buffer);
	if (rid == -1)
		return (ft_free(&str));
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str = {0};
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((str && !ft_strchr(str, '\n')) || !str)
		str = readbuf(fd, str);
	if (!str)
		return (NULL);
	line = new_line(str);
	if (!line)
		return (ft_free(&str));
	str = clean_storage(str);
	return (line);
}
