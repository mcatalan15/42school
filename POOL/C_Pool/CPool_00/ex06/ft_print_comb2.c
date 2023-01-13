/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:46:49 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/01 12:54:01 by mcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_print_comb2_part_2(int x, int y)
{
	if (y <= 9)
	{
		ft_putnbr(0);
	}
	ft_putnbr(y);
	ft_putchar(' ');
	if (x <= 9)
	{
		ft_putnbr(0);
	}
	ft_putnbr(x);
	if (y != 98 || x != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y <= 98)
	{
		x = y + 1;
		while (x <= 99)
		{
			ft_print_comb2_part_2(x, y);
			x++;
		}
		y++;
	}
}
