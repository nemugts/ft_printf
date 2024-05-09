/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:11:36 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/16 17:34:13 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
// #include<stdio.h>
// int main(void)
// {
// 	const char a[] = "jiohoibo";
//     const char b[] = "biuhon";
//     printf("%zu\n",ft_strlen(a));
//     printf("%zu\n",ft_strlen(b));
//     return 0;
// }
