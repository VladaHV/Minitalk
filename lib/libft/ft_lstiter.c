/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:46:06 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/04 15:07:54 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Apply a function to each element's content
// Iterate over the list 'lst' and apply the function 'f' to the 
// content of all elements.
// lst: pointer address to one element
// f: function to apply

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
