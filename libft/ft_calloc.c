/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtsuchid <gtsuchid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 04:16:21 by gtsuchid          #+#    #+#             */
/*   Updated: 2024/04/26 19:31:21 by gtsuchid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*mem;

	if (size > 0 && SIZE_MAX / size < num)
		return (NULL);
	mem = malloc(num * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, num * size);
	return (mem);
}
// #include<stdio.h>
// int main() {
//     // Test allocating an array of integers
//     int *array = (int *)ft_calloc(10, sizeof(int));
//     if (array == NULL) {
//         printf("Memory allocation failed.\n");
//     } else {
//         int errors = 0;
//         for (int i = 0; i < 10; i++) {
//             if (array[i] != 0) {
//                 errors++;
//                 printf(" %d.\n", i);
//             }
//         }
//         if (errors == 0) {
//             printf("\n");
//         }
//         free(array);  // Free the allocated memory
//     }
//     // Test allocating an array of doubles
//     double *dblArray = (double *)ft_calloc(5, sizeof(double));
//     if (dblArray == NULL) {
//         printf("Memory allocation failed.\n");
//     } else {
//         int errors = 0;
//         for (int i = 0; i < 5; i++) {
//             if (dblArray[i] != 0.0) {
//                 errors++;
//                 printf("%d\n", i);
//             }
//         }
//         if (errors == 0) {
//             printf("\n");
//         }
//         free(dblArray);  // Free the allocated memory
//     }
//     return 0;
// }
