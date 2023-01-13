/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:23:19 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/14 13:34:47 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

void	free_mem(char *str, char *str2, char **matrix)
{
	int	i;

	i = 0;
	free(str);
	free(str2);
	while (matrix[i] != NULL)
	{
		free(matrix[i]);
		i++;
	}
}
