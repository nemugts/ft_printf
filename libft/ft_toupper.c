/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:28:17 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/19 14:34:47 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
	return (c);
}
// #include <stdio.h>
// int main() {
//     // テストケース 1: 小文字のアルファベット
//     char lower = 'a';
//     printf("1 Input: '%c', Output: '%c'\n", lower, ft_toupper(lower));
//     // テストケース 2: 大文字のアルファベット（変更なしを期待）
//     char upper = 'A';
//     printf("2 Input: '%c', Output: '%c'\n", upper, ft_toupper(upper));
//     // テストケース 3: 数字（変更なしを期待）
//     char number = '1';
//     printf("3 Input: '%c', Output: '%c'\n", number, ft_toupper(number));
//     // テストケース 4: 特殊文字（変更なしを期待）
//     char special = '@';
//     printf("4 Input: '%c', Output: '%c'\n", special, ft_toupper(special));
//     // テストケース 5: アルファベットの範囲外の小文字（変更なしを期待）
//     char non_alpha = '`'; // ASCII で 'a' の直前
//     printf("5 I: '%c', O: '%c'\n", non_alpha, ft_toupper(non_alpha));
//     // テストケース 6: アルファベットの範囲外の小文字（変更なしを期待）
//     char non_alpha2 = '{'; // ASCII で 'z' の直後
//     printf("6 I: '%c', O: '%c'\n", non_alpha2, ft_toupper(non_alpha2));
//     return 0;
// }
