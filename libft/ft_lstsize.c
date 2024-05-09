/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:11:16 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/25 14:33:38 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
// int main() {
//     t_list *head = NULL;
//     t_list *temp;
//     // リストにいくつかのノードを追加
//     for (int i = 0; i < 5; i++) {
//         temp = new_node((void *)(size_t)i);  // 整数をvoidポインタにキャスト
//         if (temp) {
//             temp->next = head;  // 新しいノードをリストの先頭に追加
//             head = temp;
//         }
//     }
//     // リストの長さを計算
//     int size = ft_lstsize(head);
//     printf("The list contains %d nodes.\n", size);
//     // リストをクリーンアップ
//     while (head) {
//         temp = head->next;
//         free(head);
//         head = temp;
//     }
//     return 0;
// }