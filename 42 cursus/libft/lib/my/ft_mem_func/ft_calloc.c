/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victgonz <victgonz@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:07:55 by victgonz          #+#    #+#             */
/*   Updated: 2023/01/25 10:08:14 by victgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void *ft_calloc(int nmemb, int size)
{
    void *ptr;

	ptr = NULL;
    if (!(ptr = malloc(nmemb * size)))
        return (NULL);
    ptr = ft_memset(ptr, 0, nmemb * size);
    return (ptr);
}