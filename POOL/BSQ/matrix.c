/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:04:49 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/30 19:27:22 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include <string.h>

char	**make_matrix3(char **matrix, char *str, int cl)
{
	int	cc2;
	int	i;
	int	cc;

	cc2 = 0;
	i = 0;
	cc = 0;
	while (i < cl)
	{
		while (str[cc] != '\n')
		{
			matrix[i][cc2] = str[cc];
			cc2++;
			cc++;
		}
		matrix[i][cc2] = '\n';
		while (str[cc] == '\n')
			cc++;
		i++;
		cc2 = 0 ;
	}
	return (matrix);
}

char	**make_matrix2(char **matrix, char *str, int cl)
{
	int	i;
	int	cc;
	int	rw;

	i = 0;
	cc = 0;
	rw = 0;
	while (i < cl)
	{
		while (str[cc] != '\n')
		{
			cc++;
			rw++;
		}
		matrix[i] = malloc(rw * sizeof(char));
		cc++;
		rw = 0;
		i++;
	}
	return (matrix);
}

char	**make_matrix(char **matrix, char *str)
{
	int	i;
	int	cl;

	i = 0;
	cl = 0;
	while (str[i] != '\0')
	{
		if (str[i] =='\n')
			cl++;
		i++;
	}
	cl -=1;
	matrix = malloc((cl + 2)* sizeof(char *));
	matrix = make_matrix2(matrix, str, cl);
	matrix = make_matrix3(matrix, str, cl);
	matrix[cl] = NULL;

	return (matrix);
}
