/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:35:04 by mcatalan          #+#    #+#             */
/*   Updated: 2023/07/05 17:42:57 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// static void	ft_ext_convert_base(long int n, char *string, char *base)
// {
// 	if (n < 0)
// 	{
// 		ft_add_str(string, '-');
// 		n = -n;
// 	}
// 	if (n >= ft_strlen(base))
// 	{
// 		ft_ext_convert_base(n / ft_strlen(base), string, base);
// 		ft_ext_convert_base(n % ft_strlen(base), string, base);
// 	}
// 	else
// 	{
// 		ft_add_str(string, base[n]);
// 	}
// }

// char	*ft_convert_base(int n, char *base)
// {
// 	long int	number;
// 	int			length;
// 	char		*string;

// 	number = (long int)n;
// 	length = ft_number_size(n);
// 	string = malloc(sizeof(char) * (length + 1));
// 	if (string == NULL)
// 		return (NULL);
// 	ft_bzero(string, (size_t)length + 1);
// 	ft_ext_convert_base(number, string, base);
// 	return (string);
// }

// int	print_nb(int n)
// {
// 	char	*str;
// 	int		leng;

// 	str = ft_convert_base(n, "0123456789");
// 	if (str == NULL)
// 		return (-1);
// 	leng = print_string(str);
// 	free(str);
// 	return (leng);
// }
