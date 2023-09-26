/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:23:49 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/26 19:39:47 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

/* Deletes and frees the given node and every
 * successor of that node, using the function ’del’ 
 * and free(3). Finally, the pointer to the list must be set to NULL.
 * lst: The address of a pointer to a node.
 * del: The address of the function used to delete
 * the content of the node.
 */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (*lst->next)
	{
		ft_lstdelone(*lst, del);
		*lst = *lst->next;
	}
	*lst = NULL;		
}
