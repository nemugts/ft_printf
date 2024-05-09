/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 00:11:47 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/26 16:16:26 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*trimmed;
	size_t	length;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	while (*start && is_in_set(*start, set))
		start++;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (end > start && is_in_set(*end, set))
		end--;
	length = end - start + 1;
	trimmed = (char *)malloc(sizeof(char) * (length + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, start, length + 1);
	trimmed[length] = '\0';
	return (trimmed);
}
// #include <stdio.h>
// int main()
// {
//     char const *s1 = "   Hello, World!   ";
//     char const *set = " HelloWorld!";
//     char *result;
//     // ケース1: 通常のトリム
//     result = ft_strtrim(s1, set);
//     if (result != NULL) {
//         printf("Trimmed string: '%s'\n", result);
//         free(result);
//     } else {
//         printf("Memory allocation failed.\n");
//     }
//     // ケース2: 空白以外の文字をセットに設定
//     char const *set2 = ",";
//     result = ft_strtrim(s1, set2);
//     if (result != NULL) {
//         printf("Trimmed string (set = ','): '%s'\n", result);
//         free(result);
//     } else {
//         printf("Memory allocation failed.\n");
//     }
//     // ケース3: 全部トリムする場合
//     char const *s2 = "----";
//     char const *set3 = "-";
//     result = ft_strtrim(s2, set3);
//     if (result != NULL) {
//         printf("Trimmed string (all trimmed): '%s'\n", result);
//         free(result);
//     } else {
//         printf("Memory allocation failed.\n");
//     }
//     // ケース4: トリムする文字がない場合
//     result = ft_strtrim(s1, "");
//     if (result != NULL) {
//         printf("Trimmed string (no set chars): '%s'\n", result);
//         free(result);
//     } else {
//         printf("Memory allocation failed.\n");
//     }
//     // ケース5: ソースが空の文字列
//     result = ft_strtrim("", "abc");
//     if (result != NULL) {
//         printf("Trimmed string (empty source): '%s'\n", result);
//         free(result);
//     } else {
//         printf("Memory allocation failed.\n");
//     }
//     return 0;
// }
