/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:35:36 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/18 18:04:02 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	void	*dest_l;

	if (dest == src || len == 0)
		return (dest);
	dest_l = dest;
	if (dest < src)
	{
		while (len--)
			*(unsigned char *)dest++ = *(unsigned char *)src++;
	}
	else
	{
		dest += len - 1;
		src += len - 1;
		while (len--)
			*(unsigned char *)dest-- = *(unsigned char *)src--;
	}
	return (dest_l);
}
// #include<stdio.h>
// void print_array(const char *message, char *array, int size)
// {
//     printf("%s", message);
//     for (int i = 0; i < size; i++) {
//         printf("%02x ", (unsigned char)array[i]);
//         if ((i + 1) % 10 == 0)
//             printf("\n");
//     }
//     printf("\n");
// }
// int main(void)
// {
//     char *src = malloc(100);
//     for (int i = 0; i < 100; i++)
//         src[i] = i;
//     char *dst = malloc(100);
//     // ft_memmoveのテストケース
//     ft_memmove(dst, src, 0);
//     print_array("After ft_memmove(dst, src, 0): ", dst, 100);
//     ft_memmove(dst, src, 10);
//     print_array("After ft_memmove(dst, src, 10): ", dst, 100);
//     ft_memmove(dst, src, 100);
//     print_array("After ft_memmove(dst, src, 100): ", dst, 100);
//     ft_memmove(dst + 42, dst, 50);
//     print_array("After ft_memmove(dst + 42, dst, 50): ", dst, 100);
//     ft_memmove(dst, dst + 21, 50);
//     print_array("After ft_memmove(dst, dst + 21, 50): ", dst, 100);
//     free(src);
//     free(dst);
//     return 0;
// }
