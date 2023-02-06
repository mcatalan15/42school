/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:44:32 by mcatalan@st       #+#    #+#             */
/*   Updated: 2022/12/12 12:05:33 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (str[i] != '\0' && i < size - 1)
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(str));
}
