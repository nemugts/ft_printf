/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:02:24 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/18 15:07:49 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t len)
{
	ft_memset(dest, 0, len);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char libc_buf[] = "abcde";
// 	char ft_buf[] = "abcde";
// 	size_t n;

// 	n = 3;
// 	bzero(libc_buf, n);
// 	ft_bzero(ft_buf, n);
// 	printf("libc: %s\n", libc_buf);
// 	printf("ft  : %s\n", ft_buf);
// 	return (0);
// }
