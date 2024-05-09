/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:42:30 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/19 14:54:56 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c2;
	size_t	i;

	c2 = (char) c;
	i = 0;
	while (s[i] != c2)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}
// #include <stdio.h>
// int main() {
//     const char *str = "Hello, World!";
//     char target = 'W';
//     char *result = strchr(str, target);
//     if (result != NULL)
//         printf("Found '%c' in \"%s\": %s\n", target, str, result);
//     else
//         printf("Character '%c' not found in \"%s\"\n", target, str);
//     // テストケース：見つからない場合
//     target = 'z';
//     result = strchr(str, target);
//     if (result != NULL)
//         printf("Found '%c' in \"%s\": %s\n", target, str, result);
//     else
//         printf("Character '%c' not found in \"%s\"\n", target, str);
//     // テストケース：文字列の終端文字を探す
//     target = '\0';
//     result = strchr(str, target);
//     if (result != NULL)
//         printf("Found '\\0' in \"%s\" at position: %s\n", str, result);
//     else
//         printf("Character '\\0' not found in \"%s\"\n", str);
//     return 0;
// }
