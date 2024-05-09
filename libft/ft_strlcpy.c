/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:43:10 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/18 20:31:29 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
// #include<stdio.h>
// int main() {
//     char dest[50];  // デスティネーションバッファを定義
//     size_t result;  // 戻り値を格納するための変数
//     // テストケース 1: ソースが空の文字列
//     char src1[] = "";
//     result = strlcpy(dest, src1, sizeof(dest));
//     printf("Test 1: Copied %zu characters: '%s'\n", result, dest);
//     // テストケース 2: バッファサイズより小さい
//     char src2[] = "Hello, World!";
//     result = strlcpy(dest, src2, 6);  // 最初の5文字 + NULL
//     printf("Test 2: Copied %zu characters: '%s'\n", result, dest);
//     // テストケース 3: バッファサイズが十分に大きい
//     result = strlcpy(dest, src2, sizeof(dest));
//     printf("Test 3: Copied %zu characters: '%s'\n", result, dest);
//     // テストケース 4: サイズが0
//     result = strlcpy(dest, src2, 0);  // dest は変更されない
//     printf("Test 4: Copied %zu characters: '%s'\n", result, dest);
//     return 0;
// }
