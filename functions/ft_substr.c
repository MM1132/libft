/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 21:42:58 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/14 10:05:59 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*allocated_string;
	size_t	index;

	if (start > ft_strlen(s))
	{
		allocated_string = (char *)malloc(sizeof(char));
		if (allocated_string == NULL)
			return (NULL);
		allocated_string[0] = 0;
		return (allocated_string);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	allocated_string = (char *)malloc((len + 1) * sizeof(char));
	if (allocated_string == NULL)
		return (NULL);
	index = 0;
	while (index < len)
	{
		allocated_string[index] = s[start + index];
		index++;
	}
	allocated_string[index] = 0;
	return (allocated_string);
}

// TESTS

// #include <stdio.h>

// void	print_test(char const *s, unsigned int start, size_t len)
// {
// 	printf("`%s`, %u, %zu => \n`%s`\n", s, start,
//			len, ft_substr(s, start, len));
// }

// int	main(void)
// {
// 	char	str[] = "lorem ipsum dolor sit amet";

// 	print_test(str, 0, 10);
// 	print_test(str, 400, 20);

// 	return (0);
// }
