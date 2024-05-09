/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:30:48 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/25 15:54:48 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*next;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	cur = *lst;
	while (cur != NULL)
	{
		next = cur->next;
		del(cur->content);
		free (cur);
		cur = next;
	}
	*lst = NULL;
}
// int main() {
//     char *original = "Hello, world!";
//     char *dup = strndup(original, 10);
//     if (dup) {
//         printf("Duplicated string: '%s'\n", dup);
//         free(dup);  // 使用後はメモリを解放
//     }
//     return 0;
// }
