/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:17:14 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/23 15:23:58 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
}
// int main() {
//     // 標準出力に "Hello, world!\n" を出力
//     ft_putstr_fd("Hello, world!\n", 1);
//     // 標準エラー出力に "This is an error message.\n" を出力
//     ft_putstr_fd("This is an error message.\n", 2);
//     // NULL ポインタをテスト
//     ft_putstr_fd(NULL, 1);  // 何も出力されないべき
//     return 0;
// }
