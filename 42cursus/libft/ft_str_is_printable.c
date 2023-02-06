/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:13:48 by mcatalan@st       #+#    #+#             */
/*   Updated: 2022/12/08 15:51:51 by mcatalan@st      ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	i;
	int	other;

	i = 0;
	other = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			i++;
			other++;
		}
		else
			i++;
	}
	if (ft_strlen(str) == other)
		return (1);
	else
		return (0);
}
