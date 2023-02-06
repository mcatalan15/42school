/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victgonz <victgonz@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:45:33 by victgonz          #+#    #+#             */
/*   Updated: 2023/01/25 10:45:47 by victgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	num_words(const char *str, char delim)
{
	int i;
	int followed;
	int num_words;

	i = 0;
	followed = 0;
	num_words = 0;
	while (str[i])
	{
		if (str[i] != delim && followed == 0)
		{
			num_words++;
			followed = 1;
		}
		else if (str[i] == delim)
			followed = 0;
		i++;
	}
	return (num_words);
}


static char *ext_split(char const *str, int s, int f)
{
	int j;
	char *arr;

	j = 0;
	arr = malloc(sizeof(char) *  (f - s + 1));
	while (s < f)
	{
		arr[j] = str[s];
		s++;
		j++;
	}
	arr[j] = '\0';
	return (arr);
}

char **ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		pos;
	char	**arr;

	i = 0;
	j = 0;
	pos = -1;
	if (!str || !(arr = malloc(sizeof(char *) * (num_words(str, c) + 1))))
		return (NULL);
	while (i <= ft_strlen((char *)str))
	{
		if (str[i] != c && pos == -1)
			pos = i;
		else if ((str[i] == c || i == ft_strlen((char *)str)) && pos != -1)
		{
			arr[j++] = ext_split(str, pos, i);
			pos = -1;
		}
		i++;
	}
	arr[j] = NULL;
	return (arr);
}
