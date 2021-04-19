/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:31:48 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 12:10:18 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies a string up to size - 1 characters
** from the NULL terminated string "src" into the destination "dst",
** and then null terminating the result.
*/

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t r;

	if (!src)
		return (0);
	r = ft_strlen(src);
	if (size)
	{
		len = (r >= size) ? size - 1 : r;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (r);
}
