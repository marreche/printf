/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:03:11 by marreche          #+#    #+#             */
/*   Updated: 2021/04/08 18:20:18 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies n bytes from source "src"
** to destination "dst". If they overlap the behaviour
** is undefined. If they might overlap ft_memmove should be
** employed instead. This function returns the original value of dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	char		*s;
	size_t		i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
