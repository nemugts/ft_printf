/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:35:34 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/18 15:38:23 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	char	*p;
	size_t	i;

	p = (char *)dest;
	i = 0;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char libc_buf[] = "noqsb";
// 	char ft_buf[] = "bsi";
// 	int c;
// 	size_t n;
// 	c = '1';
// 	n = 3;
// 	char *libc_result = (char *)memset(libc_buf, c, n);
// 	char *ft_result = (char *)ft_memset(ft_buf, c, n);
// 	printf("libc: %s\n", libc_result);
// 	printf("ft  : %s\n", ft_result);
// 	return (0);
// }
