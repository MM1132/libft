/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:43:30 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/12 12:56:40 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// "aaa", 3

// "string"
// "aaa"
// 3

// "aaring"
// "aaa"
// 3
// 3 - 1 = 2
// index: 2

// "aasdjj;s;sa", 100


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	index;

	src_len = 0;
	while (src[src_len] != 0)
		src_len++;
	if (dstsize == 0)
		return (src_len);
	index = 0;
	while (src[index] != 0 && index < dstsize - 1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = 0;
	return (src_len);
}



// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	index;

// 	index = 0;
// 	while (src[index] != 0 && index < dstsize - 1)
// 	{
// 		dst[index] = src[index];
// 		index++;
// 	}
// 	if (dstsize > 0)
// 	{
// 		dst[index] = 0;
// 	}
// 	return (ft_strlen(src));
// }

/*
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (src[index] != 0 && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (ft_strlen(src));
}
*/
