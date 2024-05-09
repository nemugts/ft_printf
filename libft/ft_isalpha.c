/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:31:16 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/16 14:51:00 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include<stdio.h>
// int main(void)
// {
// 	int a = 'o';
//     int b = '8';
//     printf("%d\n",ft_isalpha(a));
//     printf("%d\n",ft_isalpha(b));
//     return 0;
// }
