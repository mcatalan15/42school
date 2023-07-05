/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:03:30 by mcatalan@st       #+#    #+#             */
/*   Updated: 2023/07/05 18:17:51 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	filter_flags(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_m(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr_m(va_arg(args, char *)));
	// else if (c == 'd' || c == 'i')
	// 	return (print_nb(va_arg(args, int)));
	// else if (c == 'p')
	// 	return (ft_putchar_m(va_arg(args, void *)));
	// else if (c == 'u')
	// 	return (ft_putchar_m(va_arg(args, int)));
	// else if (c == 'x')
	// 	return (ft_putchar_m(va_arg(args, int)));
	// else if (c == 'X')
	// 	return (ft_putchar_m(va_arg(args, int)));
	else if (c == '%')
		return (ft_putchar_m('%'));
	return (0);
}

int	read_str(const char *str, va_list args, int cc)
{
	int	i;
	int	check;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			check = filter_flags(str[i + 1], args);
			if (check != -1)
				cc += check;
			else
				return (-1);
			i++;
		}
		else
		{
			if (write(1, &str[i], 1) != 1)
				return (-1);
			cc++;
		}
		i++;
	}
	return (cc);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		cc;

	cc = 0;
	va_start(args, str);
	cc = read_str(str, args, cc);
	va_end(args);
	return (cc);
}
