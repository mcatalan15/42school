/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:30:52 by mcatalan@st       #+#    #+#             */
/*   Updated: 2022/12/07 15:34:44 by mcatalan@st      ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	other;

	i = 0;
	other = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
