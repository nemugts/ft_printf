/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 04:42:35 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/22 06:25:45 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	convert_number(char *str, unsigned int num, int index)
{
	while (num > 0)
	{
		str[index--] = (num % 10) + '0';
		num /= 10;
	}
}

static unsigned int	normalize_number(int n, char *str)
{
	unsigned int	num;

	if (n < 0)
	{
		str[0] = '-';
		if (n == INT_MIN)
			num = (unsigned int)INT_MAX + 1;
		else
			num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)n;
	return (num);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	num;

	len = ft_numlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	else
		num = (unsigned int)n;
	num = normalize_number(n, str);
	convert_number(str, num, len - 1);
	return (str);
}
