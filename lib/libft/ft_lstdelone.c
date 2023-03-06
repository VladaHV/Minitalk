/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:25:24 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/04 15:08:13 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Removes one element from the list
// Free the memory of the element passed as parameter using the
// 'del' function then free.The memory of 'next' must not be freed.
// lst: the element to free
// del: address of the function that can delete the element's content

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !(*del))
		return ;
	(del)(lst->content);
	free(lst);
}
