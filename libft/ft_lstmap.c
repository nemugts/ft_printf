/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:05:27 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/25 16:33:23 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new_node;
	t_list	*last_node;

	result = NULL;
	last_node = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		if (last_node)
			last_node->next = new_node;
		else
			result = new_node;
		last_node = new_node;
		lst = lst->next;
	}
	return (result);
}
// int main()
// {
//     t_list *lst = NULL;
//     t_list *new_lst;
//     int values[] = {1, 2, 3, 4, 5};
//     int i;
//     // リストの初期化
//     for (i = 0; i < 5; i++) {
//         t_list *new_node = ft_lstnew(&values[i]);
//         new_node->next = lst;
//         lst = new_node;
//     }
//     // ft_lstmapを使って新しいリストを作成
//     new_lst = ft_lstmap(lst, double_content, delete_content);
//     // 結果を表示
//     t_list *tmp = new_lst;
//     while (tmp)
//     {
//         printf("%d\n", *(int *)tmp->content);
//         tmp = tmp->next;
//     }
//     // リストの解放
//     ft_lstclear(&new_lst, delete_content);
//     ft_lstclear(&lst, delete_content);
//     return 0;
// }
