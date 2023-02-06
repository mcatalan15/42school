/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victgonz <victgonz@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:41:11 by victgonz          #+#    #+#             */
/*   Updated: 2023/01/26 12:48:00 by victgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);	
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;

	printf("entra 1\n");
	if (!s || s[0] == '\0')
		return (NULL);
	if ((unsigned int)ft_strlen((char *)s) < start)
	{
		len = 0;
		start = 0;
	}	
	else if ((unsigned int)ft_strlen((char *)(s + start)) < len)
		len = ft_strlen((char *)(s + start));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)(s + start), len + 1);
	return (str);
}

int main ()
{
	ft_substr("hola", 4294967295, 0);
}