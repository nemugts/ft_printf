/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:58:03 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/25 16:04:41 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// int main() {
//     t_list node1 = {"Node 1", NULL};
//     t_list node2 = {"Node 2", &node1};
//     t_list node3 = {"Node 3", &node2};
//     ft_lstiter(&node3, print_content);  // Print each node's content
//     return 0;
// }
