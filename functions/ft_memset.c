/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:15:11 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/04 17:40:44 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *dest, int c, size_t count)
{
	int	index;

	index = 0;
	while (index < count)
	{
		((int *)dest)[index] = c;
		index++;
	}
	return (dest);
}

int	main(void)
{
	char *arr[] = { "string1", "", "another string which is bigger", "and with new line\n\n(s)\n", "\t" };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
	{
		//void *original_result = memset(arr[i], 0, 5);
		void *our_result = ft_memset(arr[i], 0, 5);

		/* if (original_result != our_result)
		{
			printf("Test failed!\nInput: %s\nExpected: %d\nGot: %d\n\n", arr[i], original_result, our_result);
		} */
	}

	return 0;
}
