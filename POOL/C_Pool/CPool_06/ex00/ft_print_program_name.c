/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:28:32 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/15 19:36:53 by mcatalan         ###   ########.fr       */
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

	count = 0;
	while (argv [argc - 1][count] != 0)
	{
		ft_putchar(argv[0][count]);
		count++;
	}
	ft_putchar('\n');
}
