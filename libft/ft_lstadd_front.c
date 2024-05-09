/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:45:36 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/25 14:33:34 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main() {
//     t_list *head = NULL;
//     int values[] = {10, 20, 30};

//     // リストの先頭に新しい要素を追加
//     for (int i = 0; i < 3; i++) {
//         t_list *new_node = ft_lstnew(&values[i]);
//         ft_lstadd_front(&head, new_node);
//         printf("Added %d to the list: ", values[i]);
//         ft_lstprint(head);
//     }
// 	   return 0;
// }
