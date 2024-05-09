/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:10:19 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/18 15:34:12 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*c_dest;
	char	*c_src;
	size_t	i;

	if ((dest == NULL && src == NULL) || len == 0)
		return (dest);
	c_dest = (char *)dest;
	c_src = (char *)src;
	i = 0;
	while (i < len)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[] = "abcde";
// 	char	src[] = "xyz";
// 	size_t	src_n;
// 	char	*libc_result;
// 	char	*ft_result;
// 	src_n = 2;
// 	libc_result = memcpy(dest, src, src_n);
// 	ft_result = ft_memcpy(dest, src, src_n);
// 	printf("libc: %s\n", libc_result);
// 	printf("ft:   %s\n", ft_result);
// 	return (0);
// }
