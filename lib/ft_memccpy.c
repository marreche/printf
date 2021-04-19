/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:35:54 by marreche          #+#    #+#             */
/*   Updated: 2021/02/23 16:53:23 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies no more than n bytes from a source ("src")
** to its destination ("dst"),stopping when the character "c" is found.
** Memccpy returns a pointer to the next character in the destination after
** the character "c" was found. Otherwise, "n" bytes are copied and NULL
** is returned if "c" was not found in the first "n" characters of the source
** string "src".
*/

static	void	*ft_mempcpy(void *dst, const void *src, size_t len)
{
	return (ft_memcpy(dst, src, len) + len);
}

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void *d;

	d = ft_memchr(src, c, n);
	if (!src || !n)
		return (NULL);
	if (d != 0)
		return (ft_mempcpy(dst, src, (d - src + 1)));
	ft_memcpy(dst, src, n);
	return (NULL);
}
