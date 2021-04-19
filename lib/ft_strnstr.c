/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:41:09 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 12:11:49 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function locates the first occurence of "little"(needle)
** in the string "big"(haystack), only searching not more than "len" characters.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t slen;

	slen = ft_strlen(little);
	if (!slen)
		return ((char *)big);
	while (*big != '\0' && len >= slen)
	{
		len--;
		if (!ft_memcmp(big, little, slen))
			return ((char *)big);
		big++;
	}
	return (0);
}
