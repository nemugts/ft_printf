/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:05:25 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/21 22:11:39 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	if (haystack == NULL && len == 0)
		return (NULL);
	nlen = strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && nlen <= len)
	{
		if (ft_strncmp(haystack, needle, nlen) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
// #include<stdio.h>
// int main() {
//     const char *haystack;
//     const char *needle;
//     char *result;
//     // ニードルが見つかる場合のテスト
//     haystack = "hello world";
//     needle = "world";
//     result = ft_strnstr(haystack, needle, 11);
//     printf("Test 1 - Expected: 'world', Got: '%s'\n", result);
//     // ニードルが見つからない場合のテスト
//     result = ft_strnstr(haystack, "test", 11);
//     printf("Test 2  '%s'\n", result ? result : "NULL");
//     // ニードルが先頭にある場合のテスト
//     result = ft_strnstr(haystack, "hello", 11);
//     printf("Test 3 - Expected: 'hello world', Got: '%s'\n", result);
//     // ニードルが終わりにある場合のテスト
//     result = ft_strnstr(haystack, "world", 11);
//     printf("Test 4 - Expected: 'world', Got: '%s'\n", result);
//     // ニードルがヘイスタックより長い場合のテスト
//     result = ft_strnstr("short", "longer needle", 5);
//     printf("Test 5¥'%s'\n", result ? result : "NULL");
//     // 空のニードル（ヘイスタックを返すべき）
//     result = ft_strnstr(haystack, "", 11);
//     printf("Test 6 - Expected: 'hello world', Got: '%s'\n", result);
//     // 検索長さが0の場合（NULLを返すべき）
//     result = ft_strnstr(haystack, "hello", 0);
//     printf("Test¥ '%s'\n", result ? result : "NULL");
//     // ヘイスタックがNULLの場合
//     result = ft_strnstr(NULL, "needle", 0);
//     printf("'%s'\n", result ? result : "NULL");
//     return 0;
// }
