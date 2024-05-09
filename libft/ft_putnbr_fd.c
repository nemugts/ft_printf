/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:33:41 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/23 16:07:41 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
	return ;
}
// int main() {
//     // テストケースを出力
//     ft_putnbr_fd(12345, 1);  // 標準出力に12345
//     write(1, "\n", 1);
//     ft_putnbr_fd(-54321, 1);  // 標準出力に-54321
//     write(1, "\n", 1);
//     ft_putnbr_fd(0, 1);       // 標準出力に0
//     write(1, "\n", 1);
//     ft_putnbr_fd(2147483647, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-2147483648, 1);
//     write(1, "\n", 1);
//     return 0;
// }
