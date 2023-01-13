/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:57:34 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/11 22:04:45 by mcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

char	**make_matrix_str3(char **matrix_str, char *str, bool copy, int cl)
{
	int	cc2;
	int	cc;
	int	i;

	i = 0;
	cc = 0;
	while (i < cl)
	{
		while (str[cc] != '\n')
		{
			if (copy)
				matrix_str[i][cc2++] = str[cc];
			if (str[cc] == ':')
				copy = true;
			cc++;
		}
		copy = false;
		matrix_str[i][cc] = '\0';
		while (str[cc] != '\n')
			cc++;
		cc++;
		i++;
		cc2 = 0;
	}
	return (matrix_str);
}

char	**make_matrix_str2(char **matrix_str, char *str, int cl, bool copy)
{
	int	i;
	int	cc;
	int	cc2;

	i = 0;
	cc = 0;
	cc2 = 0;
	copy = false;
	while (i < cl)
	{
		while (str[cc] != '\n')
		{
			if (copy)
				cc2++;
			if (str[cc] == ':')
				copy = true;
			cc++;
		}
		matrix_str[i] = malloc(cc2 * sizeof(char));
		cc = 0;
		cc2 = 0;
		copy = false;
		i++;
	}
	return (matrix_str);
}

char	**make_matrix_str(char **matrix_str, char *str)
{
	int		i;
	int		cl;
	bool	copy;

	i = 0;
	cl = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			cl++;
		i++;
	}
	matrix_str = malloc((cl + 2) * sizeof(char *));
	copy = false;
	matrix_str = make_matrix_str2(matrix_str, str, cl, copy);
	copy = false;
	matrix_str = make_matrix_str3(matrix_str, str, copy, cl);
	matrix_str[cl + 2] = NULL;
	return (matrix_str);
}
