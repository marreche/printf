/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:58:00 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 11:54:34 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates the list "lst" and applies the function "f" to
** the content of each element.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst1;

	while (lst != NULL)
	{
		lst1 = lst->next;
		f(lst->content);
		lst = lst1;
	}
}
