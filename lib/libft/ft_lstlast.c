/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:46:55 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/04 15:07:40 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Get the last element of the list
// Returns the last element of the list
// lst: the start of the list

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst || !lst->next)
		return (lst);
	return (ft_lstlast(lst->next));
}
