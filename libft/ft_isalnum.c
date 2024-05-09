/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:57:36 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/16 16:00:40 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
// #include<stdio.h>
// int main(void)
// {
// 	int a = 'o';
//     int b = '8';
//     printf("%d\n",ft_isalnum(a));
//     printf("%d\n",ft_isalnum(b));
//     return 0;
// }
