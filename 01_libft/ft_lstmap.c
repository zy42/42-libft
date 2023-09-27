/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:45:21 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/27 13:08:47 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

/* Iterates the list ’lst’ and applies the function
 * ’f’ on the content of each node. Creates a new
 * list resulting of the successive applications of
 * the function ’f’. The ’del’ function is used to
 * delete the content of a node if needed.
 * lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list.
 * del: The address of the function used to delete
 * the content of a node if needed.
*/ 

static t_list	*init_node(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*node;
	void	*f_content;

	if (!lst || !f || !del)
		return (NULL);
	new_head = NULL;
	while (lst)
	{
		f_content = f(lst->content);
		node = init_node(f_content);
		if (!node)
		{
			del(f_content);
			return (new_head);
		}
		ft_lstadd_back(&new_head, node);
		lst = lst->next;
	}
	return (new_head);
}
