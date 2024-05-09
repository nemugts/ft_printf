/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:23:29 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/23 15:32:51 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
// int main() {
//     // 標準出力に "Hello, World!" と出力し、改行を加える
//     ft_putendl_fd("Hello, World!", 1);
//     // 標準エラー出力に "Error Message!" と出力し、改行を加える
//     ft_putendl_fd("Error Message!", 2);
//     return 0;
// }
