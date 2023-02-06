/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:30:27 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/15 19:37:04 by mcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	count;
	int	count1;

	count = 1;
	count1 = 0;
	while (count <= argc - 1)
	{
		while (argv[count][count1] != 0)
		{
			ft_putchar(argv[count][count1]);
			count1++;
		}
		ft_putchar('\n');
		count++;
		count1 = 0;
	}
}
