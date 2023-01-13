/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:12:13 by mcatalan@st       #+#    #+#             */
/*   Updated: 2022/12/13 13:18:25 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

void	ft_putstr(char *str);

void	mem_error(char **matrix, char *str)
{
	if (matrix == NULL)
	{
		ft_putstr("matrix is null\n");
		exit (0);
	}
	if (str == NULL)
	{
		ft_putstr("str is null\n");
		exit (0);
	}
}
