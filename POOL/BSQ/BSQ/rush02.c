/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:08:39 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/13 10:58:03 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	**make_matrix(char **matrix, char *str);
void	free_mem(char *str, char *str2, char **matrix);
void	mem_error(char **matrix, char *str);
int		ft_strlen(char *str);

void	print_matrix(char **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (matrix[i] != NULL)
	{
		while (matrix[i][j] != '\n')
		{
			printf("%c", matrix[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}

// check error
void	error_checker(char **matrix char *str2)
{
	int		i;
	int		j;
	char	e;
	char	o;
	char	f;

	e = str2[ft_strlen(str) -3];

	i = 0;
	j = 0;

	//check if a there're other chars
	
}

char	*first_line(char *str, char *str2)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	str2 = malloc(i * sizeof(char));
	i = 0;
	while (str[i] != '\n')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';

	return (str2);
}

char	*read_dict(char *file, char *str)
{
	int		fd;
	char	buffer;
	int		cc;
	int		numbytes;
	int		i;

	i = 0;
	cc = 0;
	fd = open(file, O_RDONLY);
	numbytes = 1;
	while ((numbytes == read(fd, &buffer, sizeof(char))) > 0)
	{
		cc++;
	}
	close(fd);
	str = malloc(cc * sizeof(char));
	fd = open(file, O_RDONLY);
	while ((numbytes == read(fd, &buffer, sizeof(char))) > 0)
	{
		str[i] = buffer;
		i++;
	}
	str[i] = '\n';
	str[i + 1] = '\0';
	close(fd);
	return (str);
}

int	bsq(char *file)
{
	char	**matrix;
	char	*str;
	char	*str2;

	str = NULL;
	str2 = NULL;
	matrix = NULL;
	str = read_dict(file, str);
	str2 = first_line(str, str2);
	printf("esto es str2: %s\n", str2);
	matrix = make_matrix(matrix, str);
	print_matrix(matrix);
	mem_error(matrix, str);
	free_mem(str, str2, matrix);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc != 1)
	{
		bsq(argv[i]);
		i++;
	}
	else
	{
		ft_putstr("map error\n");
		exit(0);
	}
}
