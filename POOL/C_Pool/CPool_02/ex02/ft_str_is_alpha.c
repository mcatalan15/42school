/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:26:12 by mcatalan@st       #+#    #+#             */
/*   Updated: 2022/12/07 15:24:57 by mcatalan@st      ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	other;

	i = 0;
	other = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
			other++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
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
