/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 01:50:30 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/22 04:41:56 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	assign_words(char const *s, char c, char **array, int i)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	array[i] = (char *)malloc(sizeof(char) * (len + 1));
	if (!array[i])
	{
		while (--i > -1)
			free (array[i]);
		free (array);
		return (0);
	}
	ft_strlcpy(array[i], s, len + 1);
	return (1);
}

char	**ft_split(const char *s, char c)
{
	int		wordcount;
	char	**array;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	wordcount = ft_wordcount(s, c);
	array = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (wordcount == 0)
		return (malloc(sizeof(char *)));
	if (!array)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && assign_words(s, c, array, i++) == 0)
			return (NULL);
		while (*s && *s != c)
			s++;
	}
	array[i] = NULL;
	return (array);
}
// int main()
// {
//     ft_split("", ',');
// }
