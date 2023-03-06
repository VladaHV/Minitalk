/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:49:04 by vhonchar          #+#    #+#             */
/*   Updated: 2023/01/04 15:09:33 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns the number of element in the list
// Count the number of elements of the list
// lst: start of the list

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
