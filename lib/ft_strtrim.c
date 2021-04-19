/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:17:44 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 12:13:02 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function allocates memory with malloc and
** returns the string "s1" with the characters specified
** in "set" removed.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;
	char	*new;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	slen = ft_strlen(s1);
	while (slen && ft_strchr(set, s1[slen]))
		slen--;
	new = ft_substr((char*)s1, 0, (slen + 1));
	return (new);
}
