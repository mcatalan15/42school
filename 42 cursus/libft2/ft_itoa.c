/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:55:46 by mcatalan@st       #+#    #+#             */
/*   Updated: 2023/04/04 13:02:50 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ext_itoa(long int n, char *str)
{
	if (n < 0)
	{
		ft_add_str(str, '-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_ext_itoa(n / 10, str);
		ft_ext_itoa(n % 10, str);
	}
	else
		ft_add_str(str, n + 48);
}

char	*ft_itoa(int n)
{
	long int	num;
	int			len;
	char		*str;

	num = (long int)n;
	len = ft_num_size(n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_bzero(str, (size_t)len + 1);
	ft_ext_itoa(num, str);
	return (str);
}
