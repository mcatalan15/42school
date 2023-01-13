/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan <mcatalan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:08:39 by mcatalan          #+#    #+#             */
/*   Updated: 2022/12/11 22:41:24 by mcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

int		match(char *str, char *to_find);
char	*ft_strstr(char *str, char *to_find);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	**make_matrix_int(char **matrix_int, char *str);
char	**make_matrix_str(char **matrix_str, char *str);
void	free_mem(char *str, char **matrix_int, char **matrix_str);
int		nums(char *numbers, char **matrix_int, char **matrix_str);


char	*read_dict(char *dict, char *str)
{
	int		fd;
	char	buffer;
	int		cc;
	int		numbytes;
	int		i;

	i = 0;
	cc = 0;
	fd = open(dict, O_RDONLY);
	while ((numbytes = read(fd, &buffer, sizeof(char))) > 0)
	{
		if (buffer != ' ')
			cc++;
	}
	close(fd);
	str = malloc(cc * sizeof(char));
	fd = open(dict, O_RDONLY);
	while ((numbytes = read(fd, &buffer, sizeof(char))) > 0)
	{
		if (buffer != ' ')
		{
			str[i] = buffer;
			i++;
		}
	}
	str[i] = '\n';
	str[i + 1] = '\0';
	close(fd);
	return (str);
}

int	rush02(char *dict, char *numbers)
{
	char	**matrix_int;
	char	**matrix_str;
	char	*str;

	str = NULL;
	matrix_int = NULL;
	matrix_str = NULL;
	str = read_dict(dict, str);
	if (str == NULL)
		return (-1);
	matrix_int = make_matrix_int(matrix_int, str);
	if (matrix_int == NULL)
		return (-1);
	matrix_str = make_matrix_str(matrix_str, str);
	if (matrix_str == NULL)
		return (-1);
	nums(numbers, matrix_int, matrix_str);
	free_mem(str, matrix_int, matrix_str);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*dict;
	int		error;

	error = 0;
	if (argc == 2)
	{
		dict = "numbers.dict";
		error = rush02(dict, argv[1]);
		if (error == -1)
			return (1);
	}
	else if (argc == 3)
	{
		error = rush02(argv[2], argv[1]);
		if (error == -1)
			return (1);
	}
	else
	{
		ft_putstr("error main");
		return (1);
	}
}
