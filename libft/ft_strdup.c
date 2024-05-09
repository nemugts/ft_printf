/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 05:05:59 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/21 21:30:57 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// int main()
// {
//     const char *original = "Hello, world!";
//     char *duplicate;
//     duplicate = ft_strdup(original);
//     if (duplicate == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1; // Return an error code
//     }
//     printf("Original: %s\n", original);
//     printf("Duplicate: %s\n", duplicate);
//     free(duplicate); // Free the allocated memory
//     return 0;
// }
