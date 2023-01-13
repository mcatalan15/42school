/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:17:09 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/06 14:34:58 by mcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	tmp;

	c = 0;
	while (c < size / 2)
	{
		tmp = tab[c];
		tab[c] = tab[size - 1 - c];
		tab[size - 1 - c] = tmp;
		c++;
	}
}
