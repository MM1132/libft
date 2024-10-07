/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:25:29 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/05 12:17:27 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *string)
{
	int	length;

	length = 0;
	while (string[length])
	{
		length++;
	}
	return (length);
}

int	main(void)
{
	printf("Running `strlen` :)\n");

	char *arr[] = { "string1", "", "another string which is bigger", "and with new line\n\n(s)\n", "\t" };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
	{
		int original_result = strlen(arr[i]);
		int our_result = ft_strlen(arr[i]);

		if (original_result != our_result)
		{
			printf("Test failed!\nInput: %s\nExpected: %d\nGot: %d\n\n", arr[i], original_result, our_result);
		}
	}

	return 0;
}
