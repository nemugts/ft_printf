/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 00:00:22 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/25 18:04:20 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lmax_div と lmax_mod はそれぞれ LONG_MAX を 10 で割った商と余りです。
// これは数値が最大値に近づいているかどうかを検証するために使用します。
// lmin_div と lmin_mod は LONG_MIN の絶対値を 10 で割った商と余りです
// （負の値のため、-1を掛けて正の値にします）。これは数値が最小値に近づいているかどうかを検証するために使用します。
static	long	overflow(int sign, long *r, const char *str)
{
	int		a;
	long	maxdiv;
	int		maxmod;
	long	mindiv;
	int		minmod;

	a = *str - '0';
	maxdiv = LONG_MAX / 10;
	maxmod = LONG_MAX % 10;
	mindiv = LONG_MIN / 10 * -1;
	minmod = LONG_MIN % 10 * -1;
	if (sign == 1 && (*r > maxdiv || (*r == maxdiv && a > maxmod)))
	{
		*r = LONG_MAX;
		return (1);
	}
	if (sign == -1 && (*r > mindiv || (*r == mindiv && a > minmod)))
	{
		*r = LONG_MIN;
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	l;
	char	current_sign;

	sign = 1;
	l = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		current_sign = *str;
		str++;
		if (!ft_isdigit(*str))
			return (0);
		if (current_sign == '-')
			sign = -1;
	}
	while (ft_isdigit(*str))
	{
		if (overflow(sign, &l, str))
			return ((int)(l * sign));
		l = (l * 10) + (*str - '0');
		str++;
	}
	return ((int)(l * sign));
}
// int main() {
//     // Test cases
//     char *test_strings[] = {
//         "123456",
//         "-123456",
//         "2147483647",   // LONG_MAX for 32-bit systems
//         "-2147483648",  // LONG_MIN for 32-bit systems
//         "2147483648",   // LONG_MAX + 1 for 32-bit systems
//         "-2147483649",  // LONG_MIN - 1 for 32-bit systems
//         "   1024 junk",
//         "junk 1024",
//         "+42",
//         " -42",
//         "  +   123", 
//         "00321",
//         "+00321",
//         "+0x1f",
//         "-0x1f",
//         "0"
//     };
//     int num_tests = sizeof(test_strings) / sizeof(test_strings[0]);
//     long atol_result;
//     int atoi_result;
//     for (int i = 0; i < num_tests; i++) {
//         atol_result = atol(test_strings[i]); 
//         atoi_result = ft_atoi(test_strings[i]); // Our function to test
//         printf("Test %d: '%s'\n", i + 1, test_strings[i]);
//         printf("Expected (atol): %ld\n", atol_result);
//         printf("Got (ft_atoi): %d\n", atoi_result);
//         if (atol_result == atoi_result)
//             printf("Result: PASS\n");
//         else
//             printf("Result: FAIL\n");
//         printf("\n");
//     }
//     return 0;
// }
