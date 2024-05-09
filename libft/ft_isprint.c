/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:07:17 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/16 16:10:37 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
// #include<stdio.h>
// int main(void)
// {
// 	int a = '	';
//     int b = '8';
//     printf("%d\n",ft_isprint(a));
//     printf("%d\n",ft_isprint(b));
//     return 0;
// }
