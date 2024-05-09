/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:51:33 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/19 19:55:45 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a1;
	const unsigned char	*a2;
	size_t				i;

	a1 = (const unsigned char *)s1;
	a2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a1[i] != a2[i])
			return ((int)a1[i] - (int)a2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main() {
//     char str1[] = "abc\0def";
//     char str2[] = "abcdeg";
//     int result = memcmp(str1, str2, 6);
//     printf("Result: %d\n", result);
//     result = memcmp(str1, str1, 6);
//     printf("Result: %d\n", result);
//     char str3[] = "a\0bc";
//     char str4[] = "abd";
//     result = memcmp(str3, str4, 3);
//     printf("Result: %d\n", result);
//     return 0;
// }
