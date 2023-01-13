/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:34:43 by mcatalan@st       #+#    #+#             */
/*   Updated: 2022/12/08 15:02:05 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printhex(long int decimal, int first_try)
{
	char	*bas16;

	bas16 = "0123456789abcdef";
	if (decimal < 16)
	{
		if (first_try == 0)
			ft_putchar('0');
		ft_putchar(bas16[decimal]);
	}
	else if (decimal >= 16)
	{
		printhex(decimal / 16, 1);
		printhex(decimal % 16, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int			i;
	long int	temp;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			ft_putchar('\\');
			temp = str[i];
			if (temp < 0)
				temp = 256 + temp;
			printhex(temp, 0);
		}
		i++;
	}
}
