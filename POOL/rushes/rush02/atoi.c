/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:18:15 by dkurcbar          #+#    #+#             */
/*   Updated: 2022/12/11 22:47:29 by mcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	sign;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign = -sign;
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (number == 0)
				number = str[i] - '0';
			else
				number = (number * 10) + (str[i] - '0');
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				return (number * sign);
		}
		i++;
	}
	return (number * sign);
}
