/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:55:16 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/19 15:14:23 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c2;
	int		i;

	c2 = (char) c;
	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c2)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
// #include <stdio.h>
// int main() {
//     const char *str = "Hello, World! World";
//     int test_chars[] = {'W', '!', 'h', 'x', '\0'};
//     char *result;
//     for (int i = 0; i < 5; i++) {
//         result = ft_strrchr(str, test_chars[i]);
//         if (result != NULL)
//             printf("'%c' : %s\n", (char)test_chars[i], result);
//         else
//             printf("'%c' not found in \"%s\"\n", (char)test_chars[i], str);
//     }
//     return 0;
// }
