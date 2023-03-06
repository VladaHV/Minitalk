/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:34:02 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/04 15:08:05 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Removes the element passed as parameter and all the following elements
// Deletes and free the memory of the element passed as parameter
// and all the following elements using 'del' and free.
// lst: pointer address to one element
// del: address of the function that can delete the element's content

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		current = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
	*lst = NULL;
}
