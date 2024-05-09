/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:01:12 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/16 16:07:36 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
// #include<stdio.h>
// int main(void)
// {
// 	int a = '9';
//     int b = '8';
//     printf("%d\n",ft_isascii(a));
//     printf("%d\n",ft_isascii(b));
//     return 0;
// }
