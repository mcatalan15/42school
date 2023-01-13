/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:30:32 by mcatalan@st       #+#    #+#             */
/*   Updated: 2022/12/08 12:30:21 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checker_before(char c)
{
	if (c == ' ' || c == '+' || c == '-' || c == '.')
		return (1);
	else
		return (0);
}

char	checker(char *str, int i)
{
	if (i == 0)
	{
		str[i] -= 32;
		i++;
	}
	else if (checker_before(str[i - 1]) == 1)
	{
		str[i] -= 32;
		i++;
	}
	else
		i++;
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			checker(str, i);
			i++;
		}
		else
			i++;
	}
	return (str);
}
