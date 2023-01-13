/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:42:10 by mcatalan          #+#    #+#             */
/*   Updated: 2022/11/28 15:35:38 by mcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_num_check(char c, char d, char u)
{
	if (c != '7' || d != '8' || u != '9')
	{
		write (1, &c, 1);
		write (1, &d, 1);
		write (1, &u, 1);
		write (1, ",", 1);
		write (1, " ", 1);
	}
	else if (c == '7' && d == '8' && u == '9')
	{
		write (1, "789", 3);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_num_check(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
