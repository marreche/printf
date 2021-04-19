/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:48:49 by marreche          #+#    #+#             */
/*   Updated: 2021/03/10 16:37:46 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function iterates through as string "str" until it finds "c".
** It then returns a pointer to the first occurence of "c".
** If "c" is not found in "str", ft_strchr returns NULL.
*/

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!*str++)
			return (NULL);
	}
	return (char *)str;
}
