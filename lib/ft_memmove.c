/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:05:35 by marreche          #+#    #+#             */
/*   Updated: 2021/04/12 13:03:34 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies len bytes from source string "src"
** to destination "dst".The two strings may overlap and the copy
** is always done in a non destructive manner.
** The ft_memmove function returns the original value of dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	if (s == d)
		return (dst);
	if (s < d)
	{
		s = s + len - 1;
		d = d + len - 1;
		while (len--)
			*d-- = *s--;
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
