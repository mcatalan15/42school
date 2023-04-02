/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:36:31 by victgonz          #+#    #+#             */
/*   Updated: 2023/03/08 15:59:13 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int    i;
	unsigned int    dst_len;
	unsigned int    slen;
	i = 0;
	dst_len = ft_strlen(dest);
	slen = ft_strlen(src);
	if (!nb)
			return (slen);
	while (src[i] && dst_len + i < (nb - 1))
	{
			dest[dst_len + i] = src[i];
			i++;
	}
	dest[dst_len + i] = '\0';
	if (dst_len > nb)
			return (slen + nb);
	return (slen + dst_len);
}
