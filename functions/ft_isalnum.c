/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:27:36 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/11 00:40:20 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || \
	((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));
}

// // TESTS
// #include <ctype.h>
// #include <stdio.h>
// void	run_tests(char input, int expected)
// {
// 	int	result;

// 	result = ft_isalnum(input);
// 	if (result == expected)
// 		printf("Test passed!\n");
// 	else
// 		printf("Test failed!\n");
// 	printf("Input: \"%c\"\n", input);
// 	printf("Expected: %d, Got: %d\n\n", expected, result);
// }

// int	main(void)
// {
// 	char	example1 = 'a';
// 	int expected1 = isalnum(example1) ? 1 : 0;
// 	run_tests(example1, expected1);
	
// 	char	example2 = 'A';
// 	int expected2 = isalnum(example2) ? 1 : 0;
// 	run_tests(example2, expected2);

// 	char	example3 = 'b';
// 	int expected3 = isalnum(example3) ? 1 : 0;
// 	run_tests(example3, expected3);

// 	char	example4 = '5';
// 	int expected4 = isalnum(example4) ? 1 : 0;
// 	run_tests(example4, expected4);

// 	char	example5 = ' ';
// 	int expected5 = isalnum(example5) ? 1 : 0;
// 	run_tests(example5, expected5);

// 	return (0);
// }