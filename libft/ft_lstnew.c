/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:17:51 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/23 16:41:13 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nlist;

	nlist = (t_list *)malloc(sizeof(t_list));
	if (nlist == NULL)
		return (NULL);
	nlist->content = content;
	nlist->next = NULL;
	return (nlist);
}
// int main() {
//     int number = 42;  // テスト用のデータ
//     t_list *node = ft_lstnew(&number);  // 新しいリストノードを生成
//     // ノードの生成が成功したかチェック
//     if (node == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;  // メモリ割り当てに失敗した場合、エラーとして終了
//     }
//     // ノードのcontentが正しく設定されたかチェック
//     if (*(int *)node->content == 42) {
//         printf("Node content is correct: %d\n", *(int *)node->content);
//     } else {
//         printf("Node content is incorrect.\n");
//     }
//     // ノードのnextが正しくNULLで初期化されたかチェック
//     if (node->next == NULL) {
//         printf("Node next is correctly initialized to NULL.\n");
//     } else {
//         printf("Node next is not NULL.\n");
//     }
//     // 使用が終わったノードのメモリを解放
//     free(node);
//     return 0;  // 正常終了
// }
