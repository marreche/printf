/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:36:17 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 13:04:24 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element new to the end of the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *lst_aux;

	lst_aux = ft_lstlast(*lst);
	if (*lst == NULL)
		*lst = new;
	else
		lst_aux->next = new;
}
