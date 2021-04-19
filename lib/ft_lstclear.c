/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:58:04 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 11:53:10 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes and frees the given element and every
** successor of that element, using the function 'del'
** and free. The pointer to the list must be set to NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *lst1;
	t_list *s;

	if (*lst != NULL)
	{
		lst1 = *lst;
		while (lst1 != NULL)
		{
			s = lst1->next;
			del(lst1->content);
			free(lst1);
			lst1 = s;
		}
		*lst = NULL;
	}
}
