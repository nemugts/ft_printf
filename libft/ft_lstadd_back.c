/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:45:23 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/25 15:11:28 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
	new->next = NULL;
}
// int main() {
//     t_list *head = NULL;
//     t_list *newNode;
//     newNode = ft_lstnew("First node");
//     ft_lstadd_back(&head, newNode);
//     newNode = ft_lstnew("Second node");
//     ft_lstadd_back(&head, newNode);
//     newNode = ft_lstnew("Third node");
//     ft_lstadd_back(&head, newNode);
//     // リストの内容を出力
//     t_list *current = head;
//     while (current != NULL) {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     // メモリ解放
//     while (head != NULL) {
//         t_list *temp = head;
//         head = head->next;
//         free(temp);
//     }
//     return 0;
// }
