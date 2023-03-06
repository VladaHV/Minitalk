/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:45:10 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/04 13:55:11 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst: The address of a pointer to the first link of a list.
// new: The address of a pointer to the node to be added to the list.
// Adds the node ’new’ at the beginning of the list

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
