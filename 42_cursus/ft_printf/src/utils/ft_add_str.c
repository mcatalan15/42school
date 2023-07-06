/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:58:06 by mcatalan@st       #+#    #+#             */
/*   Updated: 2023/07/06 11:08:20 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

/* Function that add a given character to a given string */

void	ft_add_str(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	str[i] = c;
}	
