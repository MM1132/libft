/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:23:23 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/04 16:24:48 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

void	run_tests(char input, int expected)
{
	int	result;

	result = ft_isprint(input);
	if (result != expected)
	{
		printf("Test failed!\n");
		printf("Input: \"%c\"\n", input);
		printf("Expected: %d, Got: %d\n\n", expected, result);
	}
}

int	main(void)
{
	int	example1 = 140;
	int expected1 = isprint(example1) ? 1 : 0;
	run_tests(example1, expected1);

	int example2 = 500;
	int expected2 = isprint(example2) ? 1 : 0;
	run_tests(example2, expected2);

	int example3 = 20;
	int expected3 = isprint(example3) ? 1 : 0;
	run_tests(example3, expected3);

	int example4 = 50;
	int expected4 = isprint(example4) ? 1 : 0;
	run_tests(example4, expected4);

	int example5 = -16;
	int expected5 = isprint(example5) ? 1 : 0;
	run_tests(example5, expected5);

	int example6 = 'a';
	int expected6 = isprint(example6) ? 1 : 0;
	run_tests(example6, expected6);
	
	int example7 = '\n';
	int expected7 = isprint(example7) ? 1 : 0;
	run_tests(example7, expected7);

	return 0;
}
