/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:23:19 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/11 21:34:26 by mcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

void	free_mem(char *str, char **matrix_int, char **matrix_str)
{
	int	i;

	i = 0;
	free(str);
	while (matrix_int[i] != NULL)
	{
		free(matrix_int[i]);
		i++;
	}
	i = 0;
	while (matrix_str[i] != NULL)
	{
		free(matrix_str[i]);
		i++;
	}
}
