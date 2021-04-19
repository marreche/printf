/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:32:14 by marreche          #+#    #+#             */
/*   Updated: 2021/02/19 10:57:50 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Contiguous allocation. Calloc allocates dynamic
** memory ("size" bytes of memory) for an array of "nmemb" elements
** and then returns a pointer to said allocated memory. If either
** value is 0, calloc returns either NULL, or a
** unique pointer value that can later be successfully passed to free.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!(ptr = malloc((nmemb * size))))
		return (ptr);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
