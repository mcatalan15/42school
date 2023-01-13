/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:05:24 by mcatalan@st       #+#    #+#             */
/*   Updated: 2022/12/08 15:16:26 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	*str2;

	i = size;
	*str2 = 'Hello';
	str2[i] == *addr[i];
	printf(addr[i]);
	return (i);
}
