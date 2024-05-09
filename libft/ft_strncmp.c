/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:14:59 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/19 15:30:50 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// int main() {
//     int result;
//     // テストケース 1: 等しい文字列
//     const char *str1 = "Hello, World!";
//     const char *str2 = "Hello, World!";
//     result = ft_strncmp(str1, str2, 13);
//     printf("Test 1: Expected 0, Got %d\n", result);
//     // テストケース 2: 部分的に一致する文字列
//     const char *str3 = "Hello, World!";
//     const char *str4 = "Hello, there!";
//     result = ft_strncmp(str3, str4, 7);  // 最初の7文字は一致するはず
//     printf("Test 2: Expected 0, Got %d\n", result);
//     result = ft_strncmp(str3, str4, 13); // 全体を比較すると異なる
//     printf("Test 2:  %d\n", result);
//     // テストケース 3: 異なる文字列
//     const char *str5 = "Hello, World!";
//     const char *str6 = "Goodbye, World!";
//     result = ft_strncmp(str5, str6, 15);
//     printf("Test 3: %d\n", result);
//     // テストケース 4: 文字列と空文字列
//     const char *str7 = "";
//     result = ft_strncmp(str5, str7, 15);
//     printf("Test 4: Expected a positive non-zero, Got %d\n", result);
//     // テストケース 5: n が 0 の場合
//     result = ft_strncmp(str5, str6, 0);
//     printf("Test 5: Expected 0, Got %d\n", result); 
//     return 0;
// }
