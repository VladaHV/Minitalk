/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:02:32 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/04 15:09:49 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds a new node at the end of the list
// lst: pointer address of the first element of the list
// new: pointer address of the new element to add to the list

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}	
	t = ft_lstlast(*lst);
	t->next = new;
}
