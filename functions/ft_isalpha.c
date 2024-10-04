/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:10:17 by robert            #+#    #+#             */
/*   Updated: 2024/10/04 14:23:33 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void	run_tests(char input, int expected)
{
	int	result;

	result = ft_isalpha(input);
	if (result == expected)
		printf("Test passed!\n");
	else
		printf("Test failed!\n");
	printf("Input: \"%c\"\n", input);
	printf("Expected: %d, Got: %d\n\n", expected, result);
}

int	main(void)
{
	char	example1 = 'a';
	char	example2 = 'A';
	char	example3 = 'b';
	char	example4 = '5';
	char	example5 = ' ';

	int expected1 = isalpha(example1) ? 1 : 0;
	int expected2 = isalpha(example2) ? 1 : 0;
	int expected3 = isalpha(example3) ? 1 : 0;
	int expected4 = isalpha(example4) ? 1 : 0;
	int expected5 = isalpha(example5) ? 1 : 0;

	run_tests(example1, expected1);
	run_tests(example2, expected2);
	run_tests(example3, expected3);
	run_tests(example4, expected4);
	run_tests(example5, expected5);

	return (0);
}
