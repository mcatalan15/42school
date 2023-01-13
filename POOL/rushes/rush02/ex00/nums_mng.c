/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nums_mng.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:49:33 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/11 23:02:31 by mcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

int	ft_atoi(char *str);

int	check_zero(char units[4][4], int z_count)
{
	int	i;
	int	j;
	int	x;

	x = 0;
	i = 0;
	j = 0;
	z_count = 0;
	while (i < 4 && units[i][0] == '0')
	{
		while (j < 4 && units[i][j] == '0')
		{
			if (units[i][j] == '0')
				z_count++;
			j++;
		}
		if (units[i][j] != '0' && units[i][j] != '\0')
			break ;
		j = 0;
		i++;
	}
	return (z_count);
}

/*int	compare(char units[4][4], char **matrix_int, char **matrix_str, int z_count)
{
	int	num;
	int	cents;
	int	dec;
	int	un;
	int	i;

	i = 0;
	(void) z_count;
	num = atoi(units[0]);
	cents = num / 100;
	dec = (num - cents) / 10;
	if (dec > 20)
		un = num - cents - dec;
	while (matrix_int[i] != NULL)
	{
		if (cents == atoi(matrix_int[i]))
		{
			printf("la centenas son: %s",matrix_str[i]);
			break ;
		}
		i++;
	}
	return (0);
}*/

int	print(char units[4][4], char **matrix_int, char **matrix_str)
{
	int	i;
	int	k;
	int	z_count;

	i = 3;
	k = 0;
	(void) matrix_int;
	(void) matrix_str;
	z_count = 0;
	z_count = check_zero(units, z_count);
	//compare(units, matrix_int, matrix_str, z_count);
	printf("esto es coontador de zeros:%d\n", z_count);
	return (0);
}

int	nums_to_array(char *numbers, char units[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 16)
	{
			units[i / 4][i % 4] = '0';
		i++;
	}
	i = 0;
	while (numbers[i++] != '\0')
	j = 13;
	while (i >= 0)
	{
		units[j / 3][j % 3] = numbers[i];
		i--;
		j--;
	}
	i = 0;
	while (i < 4)
		units[i++][3] = '\0';
	return (0);
}

int	nums(char *numbers, char **matrix_int, char **matrix_str)
{
	char	units[4][4];

	nums_to_array(numbers, units);
	printf("este es el primer grupo: %s\n", units[0]);
	printf("este es el segundo grupo: %s\n", units[1]);
	printf("este es el tercer grupo: %s\n", units[2]);
	printf("este es el cuatro grupo: %s\n", units[3]);
	print(units, matrix_int, matrix_str);
	return (0);
}
