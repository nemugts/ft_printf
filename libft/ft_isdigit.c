/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:38:22 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/16 14:56:49 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include<stdio.h>
// int main(void)
// {
// 	int a = 'a';
//     int b = '8';
//     printf("%d\n",ft_isdigit(a));
//     printf("%d\n",ft_isdigit(b));
//     return 0;
// }
