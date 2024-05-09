/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:31:19 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/19 18:51:06 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	char		c2;
	size_t		i;

	i = 0;
	c2 = (char)c;
	str = (const char *)s;
	while (i < n)
	{
		if (str[i] == c2)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int main() {
//     char array[] = "Hel\0lo, World!";
//     int c = 'W';
//     size_t n = 14;
//     // テストケース 1: 文字が含まれている場合
//     char *result = ft_memchr(array, c, n);
//     if (result)
//         printf("Test 1: Found '%c' at position: %ld\n", c, result - array);
//     else
//         printf("Test 1: Character not found.\n");
//     // テストケース 2: 文字が含まれていない場合
//     result = ft_memchr(array, 'z', n);
//     if (result)
//         printf("Test 2: Found 'z' in the string.\n");
//     else
//         printf("Test 2: Character 'z' not found.\n");
//     // テストケース 3: 文字がメモリの範囲の終わりにある場合
//     result = ft_memchr(array, '!', n);
//     if (result)
//         printf("Test 3: Found '!' at position: %ld\n", result - array);
//     else
//         printf("Test 3: Character '!' not found.\n");
//     // テストケース 4: nが0の場合
//     result = ft_memchr(array, 'H', 0);
//     if (result)
//         printf("Test 4: Found 'H' in the string.\n");
//     else
//         printf("Test 4: Character 'H' not found when n is 0.\n");
//     return 0;
// }
