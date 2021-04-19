/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:32:46 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 12:02:10 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function compares two strings byte by byte.
** Both strings are assumed to be n bytes long.
** If the two strings are identical, ft_memcmp returns 0,
** otherwise it returns the difference between the first
** differing bytes (treated as unsigned chars).
*/

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (n-- > 0)
	{
		if (*s1++ != *s2++)
			return (*--s1 - *--s2);
	}
	return (0);
}
