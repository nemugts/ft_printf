/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:38:42 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/23 15:43:43 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	max;
	size_t	i;

	if (dest == NULL || src == NULL || size == 0)
		return (ft_strlen(src));
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (size + srclen);
	max = size - destlen -1;
	i = 0;
	while (i < max)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + max] = '\0';
	return (destlen + srclen);
}
// #include <stdio.h>
// #include "libft.h" // あなたのライブラリヘッダーファイル
// int main() {
//     char buffer[50];
//     size_t result;
//     // テストケース 1: 通常の連結
//     strcpy(buffer, "Hello");
//     char src1[] = " World";
//     result = ft_strlcat(buffer, src1, sizeof(buffer));
//     printf("Test 1: Result: %zu, Buffer: '%s'\n", result, buffer);
//     // テストケース 2: バッファサイズがソースより小さい
//     char buffer2[10] = "Hello";
//     char src2[] = " World";
//     result = ft_strlcat(buffer2, src2, 8); // 実際のコピーは少ない
//     printf("Test 2: Result: %zu, Buffer: '%s'\n", result, buffer2);
//     // テストケース 3: サイズが 0
//     char buffer3[50] = "Hello";
//     result = ft_strlcat(buffer3, src2, 0); // 変更なし、理想的な長さのみ返す
//     printf("Test 3: Result: %zu, Buffer: '%s'\n", result, buffer3);
//     // テストケース 4: dest が NULL
//     result = ft_strlcat(NULL, src2, 50); // 安全チェック
//     printf("Test 4: Result: %zu\n", result);
//     // テストケース 5: src が空文字
//     char buffer5[50] = "Hello";
//     char src5[] = "";
//     result = ft_strlcat(buffer5, src5, sizeof(buffer5));
//     printf("Test 5: Result: %zu, Buffer: '%s'\n", result, buffer5);
//     // テストケース 6: src が NULL
//     // 注意: 本来は src が NULL の場合の処理は実装されていませんが、
//     // 理論的なテストとして追加します。
//     return 0;
//     // テストケース 6: src が NULL
// 	result = ft_strlcat(buffer, NULL, sizeof(buffer)); // 安全チェックが必要
// 	if (result == 0) {
//     printf("6: Passed - No segmentation fault.\n");
// 	} else {
//     printf("Test 6: Failed - Improper error handling.\n");
// 	}
// }
