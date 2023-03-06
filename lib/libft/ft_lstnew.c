/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:13:30 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/04 15:10:28 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a new list node element
// Allocate with malloc and return the new element
// Content: The content of the new element

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return ((void *)0);
	node->content = content;
	node->next = (void *)0;
	return (node);
}
