/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:38:16 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/21 22:08:00 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*result;

// 	result = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!result)
// 		return (NULL);
// 	ft_strlcpy(result, s + start, len + 1);
// 	return (result);
// }
// #include "libft.h"
// int main()
// {
//     char const *s = "Hello, World!";
//     char *sub;
//     // ケース1: 通常のケース
//     sub = ft_substr(s, 0, 5);
//     printf("Substring from 0, length 5: '%s'\n", sub);
//     free(sub);
//     // ケース2: startが文字列長を超える場合
//     sub = ft_substr(s, 50, 5);
//     printf("Substring from 50, length 5: '%s'\n", sub);
//     free(sub);
//     // ケース3: 指定されたlenが元の文字列の残り長さより長い場合
//     sub = ft_substr(s, 7, 100);
//     printf("Substring from 7, length 100: '%s'\n", sub);
//     free(sub);
//     // ケース4: startとlenが両方とも0
//     sub = ft_substr(s, 0, 0);
//     printf("Substring from 0, length 0: '%s'\n", sub);
//     free(sub);
//     return 0;
// }
