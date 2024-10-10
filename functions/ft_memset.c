/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:15:11 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/11 01:15:46 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	index;

	index = 0;
	while (index < count)
	{
		((int *)dest)[index] = c;
		index++;
	}
	return (dest);
}
