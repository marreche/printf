/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:55:24 by marreche          #+#    #+#             */
/*   Updated: 2021/03/03 13:24:34 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function returns a pointer to a new string which
** is a duplicate of the string "s".
*/

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s) + 1;
	if (!(new = (char *)malloc(sizeof(char) * (len))))
		return (0);
	return ((char *)ft_memcpy(new, s, len));
}
