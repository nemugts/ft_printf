/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:12:19 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/25 15:21:51 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
// void del(void *content)
// {
//     free(content);  // 仮定として、content は動的に割り当てられたメモリを指している
// }
// int main(void)
// {
//     t_list *node = malloc(sizeof(t_list));  // ノードのメモリを確保
//     if (node == NULL)
//         return 1;
//     char *data = malloc(20 * sizeof(char));  // コンテンツのメモリを確保
//     if (data == NULL)
//     {
//         free(node);
//         return 1;
//     }
//     snprintf(data, 20, "Hello, World!");
//     node->content = data;
//     node->next = NULL;
//     ft_lstdelone(node, del);  // ノードとそのコンテンツを解放
//     return 0;
// }
