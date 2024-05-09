/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:36:01 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/23 13:17:45 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
// #include "libft.h"
// int main() {
//     char const *original = "hello world";
//     char *modified;
//     modified = ft_strmapi(original, to_upper);
//     if (modified == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     printf("Original: %s\n", original);
//     printf("Modified: %s\n", modified);

//     free(modified);  // 不要になったメモリを解放
//     return 0;
// }
