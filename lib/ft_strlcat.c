/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:25:40 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 12:09:45 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function concatenates strings and returns the
** total length of the string  it tries to create.
** Therefore ft_strlcat returns the initial length of dst
** plus the length of src. If ft_strlcat traverses "siz" characters
** without finding a NULL, the length of the string is considered
** to be "siz" and the destination string will not be
** NULL terminated(since there is no space).
*/

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	char			*d;
	const char		*s;
	size_t			n;
	size_t			dlen;

	d = dst;
	s = src;
	n = siz;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
