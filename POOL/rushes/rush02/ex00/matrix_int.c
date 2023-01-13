/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:04:49 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/11 21:28:58 by mcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

char	**make_matrix_int3(char **matrix_int, char *str, int cl)
{
	int	cc2;
	int	i;
	int	cc;

	cc2 = 0;
	i = 0;
	cc = 0;
	while (i < cl)
	{
		while (str[cc] != ':')
		{
			matrix_int[i][cc2] = str[cc];
			cc2++;
			cc++;
		}
		matrix_int[i][cc] = '\0';
		while (str[cc] != '\n')
			cc++;
		cc++;
		i++;
		cc2 = 0 ;
	}
	return (matrix_int);
}

char	**make_matrix_int2(char **matrix_int, char *str, int cl)
{
	int	i;
	int	cc;

	i = 0;
	cc = 0;
	while (i < cl)
	{
		while (str[cc] != ':')
		{
			cc++;
		}
		matrix_int[i] = malloc(cc * sizeof(char));
		cc = 0;
		i++;
	}
	return (matrix_int);
}

char	**make_matrix_int(char **matrix_int, char *str)
{
	int	i;
	int	cl;

	i = 0;
	cl = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			cl++;
		i++;
	}
	matrix_int = malloc((cl + 2) * sizeof(char *));
	matrix_int = make_matrix_int2(matrix_int, str, cl);
	matrix_int = make_matrix_int3(matrix_int, str, cl);
	matrix_int[cl + 2] = NULL;
	return (matrix_int);
}
